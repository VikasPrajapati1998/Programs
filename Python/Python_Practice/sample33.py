class Sample:
    def __init__(self):
        self.i = 0
        self._j = 0
        self.__k = 0

    def reference(self):
        return self

    def display(self):
        print(self.i, self._j, self.__k)


def main():
    try:
        s = Sample()
        s.display()
        ptr = s.reference()
        print(ptr, type(ptr))
        ptr.i = 12
        ptr._j = 13
        ptr._Sample__k = 14
        ptr.display()
        s.display()

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
