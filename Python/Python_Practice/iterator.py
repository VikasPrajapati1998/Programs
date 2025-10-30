lst = [x for x in range(1, 5)]
print(lst)

try:
    itr = lst.__iter__()
    print(itr.__next__())
    print(itr.__next__())
    print(itr.__next__())
    print(itr.__next__())
    print(itr.__next__())
except StopIteration as si:
    print("Error: ", si)
finally:
    print()


itr = lst.__iter__()
while True:
    try:
        print(itr.__next__(), end=', ')
    except StopIteration:
        break

