def outer():
    a = 500
    print("Outer function.")
    def inner():
        # a = 100 # you can use variable 'a' but can not update
        b = 12
        print("Inner function.")
        print(a, b)
    inner()
    print("Outer function.")

def main():
    outer()
    print("-------------------------")
    f = outer
    f()
    print("-------------------------")
    print(globals())
    print("-------------------------")
    print(locals())

if __name__ == "__main__":
    main()

