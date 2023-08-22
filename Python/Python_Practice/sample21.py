class Complex:
    def __init__(self, r=0.0, i=0.0):
        self.__real = r
        self.__imag = i

    def __add__(self, other):
        z = Complex(self.__real + other.__real, self.__imag + other.__imag)
        return z

    def __sub__(self, other):
        z = Complex(self.__real - other.__real, self.__imag - other.__imag)
        return z

    def __mul__(self, other):
        z = Complex(
            self.__real * other.__real - self.__imag * other.__imag,
            self.__real * other.__imag + self.__imag * other.__real
        )
        return z

    def display(self):
        print("(", self.__real, " + ", self.__imag, "i", ")")


def main():
    try:
        c1 = Complex(1.5, 2.2)
        c2 = Complex(2.5, 3.8)
        c1.display()
        c2.display()

        c3 = c1 + c2
        c3.display()

        c4 = c2 - c1
        c4.display()

        c5 = c1 * c2
        c5.display()

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
