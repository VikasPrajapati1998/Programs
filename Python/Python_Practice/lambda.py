add = lambda x, y: x+y
sub = lambda x, y: x-y

print(add(3, 4))
print(sub(8, 3))

power = (lambda x, y: x**y)(4,3)
print(power)

power = lambda x, y: x**y
print(power(5, 3))
print()

# Map: Apply a operation on the each element of the collection
lst = [x for x in range(1, 10)]
print(lst)
lst1 = list(map(lambda x: x**2, lst))
print(lst1)

# Filter: Get a sub collection from a collection as per your condition
from random import randint
lst = [randint(10, 99) for _ in range(10)]
print(lst)
lst1 = list(filter(lambda x: x%2==0, lst))
print(lst1)

# Reduce: Get a scaler result of any operation on collection
from functools import reduce
lst = [randint(1, 9) for _ in range(10)]
print(lst)
lst1 = reduce(lambda x, y: x+y, lst)
print(lst1)

lst2 = reduce(lambda x, y: x*y, lst)
print(lst2)

# Sorting
keys = [chr(k) for k in range(ord('a'), ord('a')+10)]
values = [randint(10, 99) for _ in range(10)]

lst = [(key, value) for key, value in zip(keys, values)]
print(lst)
print()

lst1 = sorted(lst, key=lambda k: k[1])
print(lst1)
print()

lst2 = sorted(lst1, key=lambda k: k[0])
print(lst2)
print()

# Complex Sorting
lst1 = [chr(randint(ord('a'), ord('z'))) for _ in range(10)]
lst2 = [chr(randint(ord('A'), ord('Z'))) for _ in range(10)]
lst3 = [randint(10, 99) for _ in range(10)]

lst = [(x, y, z) for x, y, z in zip(lst2, lst3, lst1)]
print("Actual List: ", lst)
print()

lst_sorted = sorted(lst, key=lambda k: k[0])
print("Sorted[0]: ", lst_sorted)
print()

lst_sorted = sorted(lst, key=lambda k: k[1])
print("Sorted[1]: ", lst_sorted)
print()

lst_sorted = sorted(lst, key=lambda k: k[2])
print("Sorted[2]: ", lst_sorted)
print()

