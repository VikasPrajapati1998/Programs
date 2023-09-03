
def main():
    try:
        a = int(input("Enter a : "))
        b = int(input("Enter b : "))
        c = a/b
        print(f"{c:.3f}")
    except ZeroDivisionError as zde:
        print("ZDE : ", str(zde).title())
    except ValueError as ve:
        print("VE : ", str(ve).title())
    except Exception as e:
        print("E : ", str(e).title())
    else:
        print("Else Block")
    finally:
        print("Final Block : ", end='')
        print("Program End")


if __name__ == "__main__":
    main()
