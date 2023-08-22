import random


def main():
    try:
        roll = [x for x in range(1, 11)]
        name = ["Arjun", "Akash", "Chandan", "Dinesh", "Elvish", "Ganesh"]
        marks = [random.randint(30, 100) for x in range(1, 11)]
        itr = zip(roll, name, marks)
        for ele in itr:
            print(ele)
        print("------------------------------------------------------")

        lst = [random.randint(10, 99) for x in range(10)]
        print(lst)
        l = lst.__iter__()
        print(l.__next__())
        print(l.__next__())
        print("-------------------------------------------------------")

        lt = iter(lst)
        print(next(lt))
        print(next(lt))
        print(next(lt))
        print("-------------------------------------------------------")

        print(hasattr(lst, '__iter__'))
        print(hasattr(lst, '__next__'))
        print(hasattr(l, '__iter__'))
        print(hasattr(l, '__next__'))

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
