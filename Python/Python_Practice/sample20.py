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
        z.__real = self.__real - other.__real
        z.__imag = self.__imag - other.__imag
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
        c1.display()
        c2.display()

        c3 = c1 + c2
        c3.display()

        c4 = c1 - c2
        c4.display()

        c5 = c1 * c2
        c5.display()

        i = int()
        print(i, type(i), id(i))

        print(type(c5), id(c5))

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
