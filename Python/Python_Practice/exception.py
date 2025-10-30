def divide_numbers():
    try:
        # Take inputs
        numerator = input("Enter the numerator: ")
        denominator = input("Enter the denominator: ")
        
        # Convert input to floats
        numerator = float(numerator)
        denominator = float(denominator)
        
        # Check if the denominator is zero and raise an exception if true
        if denominator == 0:
            raise ZeroDivisionError("Denominator cannot be zero!")
        
        result = numerator / denominator
    
    except ValueError:
        print("Error: Please enter valid numeric value.")
    
    except ZeroDivisionError as zde:
        print(f"Error: {zde}")
    
    except Exception as e:
        print(f"Error: An unexpected error occurred: {e}")
    
    else:
        # Execute if no exception occures in the try block.
        print("Result: {0:.3}".format(result))
    
    finally:
        # Always executes.
        print("Execution completed. Cleaning up resources.")


if __name__ == "__main__":
    count = int(input("Enter the number of test cases: "))
    while(count):
        print(f"Test Case {count}: ")
        divide_numbers()
        count -= 1
        print()

