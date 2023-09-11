import numpy as np


def main():
    try:
        lst = list(np.random.randint(1, 9, 5))
        tpl = tuple(np.random.randint(1, 9, 5))
        st = set(np.random.randint(1, 9, 5))

        print(lst)
        print(tpl)
        print(st)

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
