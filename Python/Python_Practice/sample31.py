import random


def main():
    try:
        roll = [x for x in range(1, 11)]
        name = ["Arjun", "Akash", "Chandan", "Dinesh", "Elvish", "Ganesh"]

        # normal iterator
        for ele in roll:
            print(ele, end=", ")
        print("\n-------------------------------------------------")

        # enumerator
        for i, ele in enumerate(name):
            print(i, ":", ele)
        print("-------------------------------------------------")

        # zip
        for ele in zip(roll, name):
            print(ele)
        print()
        for x, y in zip(roll, name):
            print(x, ":", y)
        print("-------------------------------------------------")

        marks =[random.randint(30, 100) for x in range(1, 11)]
        print(f"{'Roll No':<20} {'Name':<20} {'Marks':<20}")
        for ele in zip(roll, name, marks):
            print(f"{ele[0]:<20} {ele[1]:<20} {ele[2]:<20}")
        print("-------------------------------------------------")

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()


