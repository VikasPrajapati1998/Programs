class Base:
    def __init__(self):
        self.a = 10  # public
        self._b = 12  # protected
        self.__c = 15  # private
    def display(self):
        print("Base : ", self.a, self._b, self.__c)
        print("Base id : ", id(self.a), id(self._b), id(self.__c))
        print("Base type : ", type(self.a), type(self._b), type(self.__c))

class Derived(Base):
    def __init__(self):
        super().__init__()
        self.a = 100
        self._b = 120
        self.__c = 150
        super().__init__()

        self.i = 3
        self._j = 5
        self.__k = 7

        # super().a = 11  # error
        # super()._b = 23  # error
        # super().__c = 41  # error

    def display(self):
        super().display()
        print("Derived : ", self.a, self._b, self.__c)
        print("Derived id : ", id(self.a), id(self._b), id(self.__c))
        print("Derived type : ", type(self.a), type(self._b), type(self.__c))

        print()
        print("Derived : ", self.i, self._j, self.__k)
        Base.display(self)


def main():
    try:
        bobj = Base()
        bobj.display()
        print(bobj.a)
        print(bobj._b)
        # print(bobj.__c)   # error

        print("-----------------------------------------")
        dobj = Derived()
        dobj.display()
        print(dobj.a, dobj.i)
        print(dobj._b, dobj._j)
        # print(dobj.__c, dobj.__k)  # error

        print("-----------------------------------------")
        print(isinstance(bobj, Base))
        print(issubclass(Derived, Base))

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
