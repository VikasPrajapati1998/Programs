class Base:
    def __init__(self):
        self.i = 10
        self._j = 2.71
        self.__k = "Arjun"

    def display(self):
        print(self.i, self._j, self.__k)

    def reference(self):
        return self


def main():
    try:
        b1 = Base()
        print(b1.i, b1._j, b1._Base__k)
        b1.display()
        print()

        b1.i = 20
        b1._j = 3.14
        b1._Base__k = "Vikas"
        b1.display()
        print()

        rb1 = b1.reference()
        print(rb1.i, rb1._j, rb1._Base__k)
        print()

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()

