# set methods
def main():
    try:
        s = {1, 3, 5, 7, 9, 2, 4, 6, 8, 4, 8, 5, 6}
        set1 = s.copy()
        print(set1)
        set1.add(24)
        print(set1)
        set1.discard(4)
        print(set1)
        set1.clear()
        print(set1)
        set1 = s.copy()
        set1.pop()
        print(set1)
        set1.discard(7)
        print(set1)
        set1.remove(5)
        print(set1)
        set1.update({5, 10, 15, 20})
        print(set1)

        # -----------------------------
        set1 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}
        set2 = {4, 8, 12, 16, 20, 24}
        print(set1)
        print(set2)
        print(set1.difference(set2))
        print(set1)
        set1.difference_update(set2)
        print(set1)
        set2 = {1, 3, 5, 7, 9}
        print(set1.symmetric_difference(set2))
        print(set1.union(set2))
        print(7/0)

    except Exception as e:
        print(e)

    except ZeroDivisionError as zde:
        print("Last Error : ")
        print(zde)


if __name__ == "__main__":
    main()
