from abc import ABC, abstractmethod


class Shape(ABC):
    @abstractmethod
    def draw(self):
        pass


class Rectangle(Shape):
    def draw(self):
        print("In Rectangle.")


class Circle(Shape):
    def draw(self):
        print("In Circle.")


def main():
    try:
        r = Rectangle()
        r.draw()
        c = Circle()
        c.draw()

        print("-------------------------------")
        s = Shape  # no use of s = Shape reference
        s = Rectangle()
        s.draw()
        s = Circle()
        s.draw()

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
