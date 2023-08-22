def main():
    try:
        a, b, c = [n for n in input("Enter name : ").split()]
        print(a, b, c, sep=", ", end="!\n")
        print(a, b, c, sep=", ", end="_\n")
        print(a, b, c, sep="_", end="\n")

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
