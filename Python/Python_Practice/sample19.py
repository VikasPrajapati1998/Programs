class Complex:
    def __init__(self, r=0.0, i=0.0):
        self.__real = r
        self.__imag = i

    def __add__(self, other):
        z = Complex()
        z.__real = self.__real + other.__real
        z.__imag = self.__imag + other.__imag
        return z

    def __sub__(self, other):
        z = Complex()
        z.__real = self.__real + other.__real
        z.__imag = self.__imag + other.__imag
        return z

    def __mul__(self, other):
        z = Complex()
        z.__real = self.__real * other.__real - self.__imag * other.__imag
        z.__imag = self.__real * other.__imag + self.__imag * other.__real
        return z

    def display(self):
        print("(", self.__real, " + ", self.__imag, "i", ")")


def main():
    try:
        c1 = Complex(1.1, 2.2)
        c2 = Complex(2.5, 3.7)

        print("a = ", end=""); c1.display()
        print("b = ", end=""); c2.display()
        print()

        c3 = c1 + c2
        print("Add = ", end=""); c3.display()

        c4 = c2 - c1
        print("Sub = ", end=""); c4.display()

        c5 = c1 * c3
        print("Multi = ", end=""); c5.display()
        print()

        c3 = Complex(5.4, 7.8)
        c7 = c1 + c3 + c4
        print("Add = ", end=""); c7.display()


    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
