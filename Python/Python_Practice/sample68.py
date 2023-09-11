b = bytes(5)
s = {'Alpha', 3, 4.54, (2, 4, 5, 6), True, b}
print(s)

name = "Transformer"
print(name)
print(name[:])
print(name[1:])
print(name[:-1])
print(name[::2])
print(name[-1::-1])
print(name[::-1])
print(name.count('r'))
print(name.count('an'))
print(sorted(name))
for x in reversed(name):
    print(x, end='')
print()
print(name)
print(name.find('n'))
