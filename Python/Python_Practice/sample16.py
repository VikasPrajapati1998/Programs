from abc import ABC, abstractmethod


class Shape(ABC):
    @abstractmethod
    def draw(self):
        pass

    def message(self):
        print("Hello Programmer")


class Rectangle(Shape):
    def draw(self):
        print("In Rectangle.draw.")


class Circle(Shape):
    def draw(self):
        print("In Circle.draw.")


# s = Shape()
c = Circle()
c.draw()
