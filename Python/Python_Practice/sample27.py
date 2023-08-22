class Base:
    def display(self):
        print("In Base.")


class Derived1(Base):
    def display(self):
        print("In Derived1.")


class Derived2(Base):
    def display(self):
        print("In Derived2.")


class Der(Derived1, Derived2):
    def display(self):
        super().display()   # Derived1
        Derived1.display(self)   # Derived1
        Derived2.display(self)   # Derived2
        print(Der.__mro__)
        super().display()   # Derived1


def main():
    try:
        d1 = Der()
        d1.display()

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
