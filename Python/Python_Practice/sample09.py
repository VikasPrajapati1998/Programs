def main():
    try:
        list1 = [2, 4, 6, 8]
        list2 = [1, 3, 5, 7, 9]
        lst = list1.copy()
        print(id(list1), id(lst))
        print(lst)
        lst.append(10)
        print(lst)
        lst.clear()
        print(lst)
        lst = list1.copy()
        print(lst)
        count = lst.count(8)
        print(count)
        lst.extend(list2)
        print(lst)
        n = lst.index(3)
        print(n)
        lst.insert(5, 15)
        print(lst)
        lst.pop()
        print(lst)
        lst.pop(4)
        print(lst)
        lst.remove(15)
        print(lst)
        lst.reverse()
        print(lst)
        lst.sort()
        print(lst)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
