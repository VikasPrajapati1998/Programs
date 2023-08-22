# User define iterator
class Avg:
    def __init__(self, data):
        self.__data = data
        self.__len = len(data)
        self.__first = 0
        self.__sec = 1

    def __iter__(self):
        return self

    def __next__(self):
        if self.__sec == self.__len:
            raise StopIteration
        self.__avg = (self.__data[self.__first] + self.__data[self.__sec]) / 2
        self.__first += 1
        self.__sec += 1
        return self.__avg


def main():
    try:
        lst = [x for x in range(10, 80, 10)]
        print(lst)
        col = Avg(lst)
        avg = [x for x in col]
        print(avg)

        # for x in col:
        #     print(x)

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
