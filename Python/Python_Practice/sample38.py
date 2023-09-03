from abc import ABC, abstractmethod, abstractclassmethod, abstractstaticmethod


class Abs(ABC):
    @abstractmethod
    def display(self):
        pass


class Sample:
    def __init__(self):
        """
        A zero parametric constructor.
        """
        self._a = 0
        self._b = 0

    @staticmethod
    def printIntro():
        print("This the sample class")

    def showData(self):
        print(self._a, self._b)

    def setData(self, a, b):
        self._a = a
        self._b = b

    def getSelf(self):
        return self

    @classmethod
    def classMethod(cls, self):
        print("Class Method")
        print(cls)
        print(type(cls))
        cls.showData(self)
        print("-----------------------------------------")

    @staticmethod
    def staticMethod():
        print("Static method")

        print("-----------------------------------------")


def main():
    try:
        obj = Sample()
        obj.staticMethod()
        obj.classMethod(obj)
        Sample.staticMethod()
        Sample.classMethod(obj)
        Sample.showData(obj)

    except Exception as e:
        print("Exception : ", e)

    print("This is the final line of the program.")
    print("End of program.")


if __name__ == "__main__":
    main()
