def main():
    try:
        a, b = 7, 5
        # case 1
        if a > b:
            print(a)

        # Case 2
        if a > b:
            print(a)
        else:
            print(b)

        # Case 3
        if a > b:
            print(a)
        elif a < b:
            print(b)

        # Case 4
        if a > b:
            print(a)
        elif a < b:
            print(b)
        else:
            print("Equal")


    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
