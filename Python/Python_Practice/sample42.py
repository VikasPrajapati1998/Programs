class StackError(Exception):
    def __init__(self, size, pos, message):
        super().__init__(message)
        self.size = size
        self.pos = pos


class StackOverflowError(StackError):
    def __init__(self, size, pos):
        message = "Stack Overflow Error"
        super().__init__(size, pos, message)


class StackEmptyError(StackError):
    def __init__(self, size, pos):
        message = "Stack Is Empty"
        super().__init__(size, pos, message)


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

    def pos(self):
        return self.__pos

    def printStack(self):
        print("[", end='')
        for i in range(self.__pos + 1):  # Include all elements
            print(self.__array[i], end=', ')
        print("]")


def main():
    try:
        s = Stack(5)
        s.push(2)
        s.push(4)
        # s.push(6)
        # s.push(8)
        s.printStack()
        print(s.pop())
        print(s.pop())
        print(s.pop())
        s.printStack()
        s.push(6)
        s.push(8)
        s.printStack()
    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()


