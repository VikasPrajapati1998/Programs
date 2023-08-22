mat = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12]]

it = zip(*mat)
for x in it:
    print(x)

it = zip(*mat)
lst = [[] for x in range(4)]
i = 0
for t in it:
    lst[i] = list(t)
    i += 1

print(mat)
print(lst)
