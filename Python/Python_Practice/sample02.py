def main():
    try:
        import math
        import cmath
        print(dir(__builtins__))
        print()
        print(dir(math))
        print(dir(cmath))

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
