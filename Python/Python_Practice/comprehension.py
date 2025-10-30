lst = [x for x in range(10)]
print(lst)

lst = [x for x in range(20) if x%2==0]
print(lst)

lst = [x/2 for x in range(20) if x%2!=0]
print(lst)

lst = [bool(x%2) for x in range(20)]
print(lst)

keys = ['a', 'b', 'c', 'd', 'e']
values = [2, 4, 6, 8, 10]

dct = {key: value for (key, value) in zip(keys, values)}
print(dct)

dct = {key: value**2 for key, value in dct.items()}
print(dct)

