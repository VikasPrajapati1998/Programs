def main():
    try:
        num = int(input("Enter a number: "))
        
        assert num > 0, "Number must me positive."
        
    except AssertionError as ae:
        print(f"Assertion Error: {ae}")
    
    except ValueError as ve:
        print(f"Value Error: {ve}")
    
    except Exception as e:
        print(f"Unknown Error: {e}")
    
    else:
        print(f"Square of number is {num**2}.")
    
    finally:
        print("Program Execution Completed.")
    

if __name__ == "__main__":
    main()

    
    