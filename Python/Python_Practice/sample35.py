# Generator
import sys
def Avg(data):
    for i in range(0, len(data)-1):
        yield (data[i] + data[i + 1])/2


def main():
    try:
        lst = [x for x in range(10, 80, 10)]
        # for i in Avg(lst):
        #     print(i)
        avg = [x for x in Avg(lst)]
        print(avg)
        print("---------------------------------------------")

        lst = [i*i for i in range(15)]
        gen = (i*i for i in range(15))
        print(lst)
        print(gen)
        print(type(lst), type(gen))
        print(sys.getsizeof(lst), sys.getsizeof(gen))

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
