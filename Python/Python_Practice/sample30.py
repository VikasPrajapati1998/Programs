from abc import ABC, abstractmethod


class Shape():
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
        s = [Shape(), Rectangle(), Circle()]
        for obj in s:
            obj.draw()
        print("----------------------------------------------")

        # Using function
        def figure(shape):
            shape.draw()

        for obj in s:
            figure(obj)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
