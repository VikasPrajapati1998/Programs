
s = {2, 3, 4, 'alpah', (3.4, 5.6, 7.8), 3.14}
s.add(765)
print(s)
print()

for x in s:
    print(x)
print()

# --------------------------------------------------------------------------
d = {'a': 65, 'b': 66, 'c': 67, 'd': 68, 'e': 69, 'f': 70}

d1 = sorted(d.items(), key=lambda k: k[1], reverse=True)
print(d1)

