import copy

lst = [x for x in range(10, 100, 5)]
print(lst)
lst[4:7] = []
print(lst)
print(lst.count(70))
print(sorted(lst))
lst = [x for x in (reversed(lst))]
print(lst)

# cloning
lst2 = []
lst2 = lst2 + lst
print(lst2)
lst2.append(100)
print(lst2)
print(lst)

lst3 = copy.copy(lst)
lst4 = copy.deepcopy(lst)
lst3.append(200)
lst4[3:7] = []
print()

print(lst)
print(lst2)
print(lst3)
print(lst4)
