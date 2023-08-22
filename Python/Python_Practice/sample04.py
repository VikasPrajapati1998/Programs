def main():
    try:
        x = format(0.5, '%')
        print(x)
        print(type(x), id(x))

        # ---------------------------------
        x = format(75, 'o')
        print(x)
        x = format(75, 'x')
        print(x)
        x = format(75, 'X')
        print(x)
        x = format(113, 'n')
        print(x)

        # --------------------------------
        x = memoryview(b"Hello")
        print(x)

        # --------------------------------
        mylist = iter(["apple", "banana", "cherry"])
        x = next(mylist)
        print(x)
        x = next(mylist)
        print(x)
        x = next(mylist)
        print(x)
        print()

        # --------------------------------
        a = ("John", "Charles", "Mike")
        b = ("Jenny", "Christy", "Monica")
        z = zip(a, b)
        for k in z:
            print(k)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
