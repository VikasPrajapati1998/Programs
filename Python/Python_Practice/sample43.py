
class StackOverflowError(Exception):
    def __init__(self, size, pos):
        message = "Stack Overflow Error"
        print(message, " : ", "Size =", size, "Position =", pos)


class StackEmptyError(Exception):
    def __init__(self, size, pos):
        message = "Stack Is Empty"
        print(message, " : ", "Size =", size, "Position =", pos)


class Stack:
    def __init__(self, size):
        self.__size = size
        self.__array = []
        self.__pos = -1

    def isEmpty(self):
        return self.__pos == -1

    def isFull(self):
        return self.__pos == self.__size - 1

    def push(self, value):
        if self.isFull():
            raise StackOverflowError(self.__size, self.__pos)

        self.__pos += 1
        self.__array.append(value)

    def pop(self):
        if self.isEmpty():
            raise StackEmptyError(self.__size, self.__pos)

        value = self.__array.pop()
        self.__pos -= 1
        return value

    def info(self):
        return self.__size, self.__pos

    def printStack(self):
        print("[", end='')
        for i in range(self.__pos + 1):  # Include all elements
            print(self.__array[i], end='')
            if i != self.__pos:
                print(end=', ')
        print("]")


def main():
    import os
    try:
        msg = """Interact With Stack : 
                    1. To Display Stack
                    2. To Push Value
                    3. To Pop Value
                    4. To Check Size, Position
                    5. To Check Stack Full?
                    6. To Check Stack Empty?
                    7. To Exit"""
        size = int(input("Enter the size of Stack : "))
        s = Stack(size)

        # os.system("command")

        while True:
            print(msg)
            choice = int(input("Enter Your Choice : "))
            if choice == 1:
                s.printStack()
            elif choice == 2:
                value = int(input("Enter the Value : "))
                s.push(value)
            elif choice == 3:
                value = s.pop()
                print(value)
            elif choice == 4:
                position = s.info()
                print(position)
            elif choice == 5:
                print("Stack Full : ", s.isFull())
            elif choice == 6:
                print("Stack Empty : ", s.isEmpty())
            elif choice == 7:
                exit()
            else:
                print("Invalid Input. Try Again.")

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()


