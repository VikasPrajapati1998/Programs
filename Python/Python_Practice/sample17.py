import functools
def main():
    global count
    lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    m = list(map(lambda x : x*2, lst))
    print(m)
    count += 1

    f = list(filter(lambda x : x%2==0, lst))
    print(f)
    count += 1

    r = functools.reduce(lambda x, y : x+y, lst)
    print(r)
    count += 1

    # all in one
    res = functools.reduce(lambda x, y : x+y, list(filter(lambda x : x%2==0, list(map(lambda x: x*2, lst)))))
    print(res)

    print(count)

if __name__ == "__main__":
    count = 0
    main()
    print(count)
