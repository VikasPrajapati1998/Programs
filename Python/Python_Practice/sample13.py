def outer():
    print("Start Outer.")

    def inner():
        print("Inside the inner.")

    print("Inside Outer")
    inner()


def main():
    outer()
    print(type(outer))


if __name__ == "__main__":
    main()
