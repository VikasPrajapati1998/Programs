def display(*args):
    for k in args:
        print(k)
    print()


def show(**kwargs):
    for k, v in kwargs.items():
        print(k, v, sep=" : ")
    print()


def view(i, j, *args, p, q, **kwargs):
    print("i = ", i)
    print("j = ", j)
    print()

    for a in args:
        print(a, sep=", ")
    print()

    print("p = ", p)
    print("q = ", q)
    print()

    for k, v in kwargs.items():
        print(k, v, sep=": ")
    print()


def main():
    try:
        print("----------------------------------------------------")
        display(86, 3.65, "Arjun", [1, 3, 5, 7, 9], (2, 4, 6, 8), {"Rohan": 88, "Sanu": 87, "Arjun": 85})

        print("----------------------------------------------------")
        show(a=89, b=3.14, c="Arjun", d=[2, 4, 6, 8])

        print("----------------------------------------------------")
        view(23, 3.14, "Arjun", "Rohan", "Sanu", p=47, q=9.8, alpha="Suresh", beta="Mahesh", delta="Rakesh")

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
