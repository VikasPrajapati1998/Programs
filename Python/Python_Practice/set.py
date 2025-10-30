from random import randint
s = {1, 2, 3, 4, 5}
print(s, type(s))

s = {randint(10, 99) for _ in range(10)}
print(s, len(s))

s.add(100)
print(s, len(s))

try:
    s.remove(32)
    print(s, len(s))
except KeyError as ke:
    print("Error: ", ke)

s.discard(32)
print(s, len(s))

s1 = s.copy()

s.clear()
print(s, len(s))

print(s1, len(s1))
print()

# Check superset and subset
s1 = {randint(1, 9) for _ in range(10)}
s2 = {randint(1, 9) for _ in range(5)}
print(s1)
print(s2)
print(s1.isdisjoint(s2))

print(s2.issubset(s1))
print(s1.issuperset(s2))

# Looping
s = {randint(10, 99) for _ in range(20)}
print(s, len(s))
for index, ele in enumerate(s):
    print((index, ele), end=', ')
print()

# Frozenset
s = frozenset({randint(1, 9) for _ in range(7)})
print(s, len(s))
try:
    s.add(7)
except AttributeError as ae:
    print("Error: ", ae)
print()

# ################################ Operations ################################
print("################################ Operations ################################")
s1 = {1, 2, 3, 4}
s2 = {5, 6, 7, 8}
s = {randint(10, 99) for _ in range(40)}

# Concatenation and Merging : Not works.
try:
    print(s1 + s2)
except TypeError as te:
    print("Error: ", te)
print()

# Conversion
print("=============== Conversion ==============")
print(list(s1))
print(tuple(s2))
print()

# Aliasing
print("=============== Aliasing ==============")
s1 = {1, 2, 3}
s2 = {1, 2, 3}
s3 = s1
print(id(s1), id(s2))
print(id(s1), id(s3))
print()

print("=============== Cloning ==============")
s1 = {1, 2, 3, 4, 5, 6}
s2 = {1, 2, 3, 4, 5, 6}

clone = s1.copy()
print("Original Set:", s1)
print("Cloned Set:", clone)

print("\n=============== Searching ==============")
element = 4
if element in s1:
    print(f"Element {element} found in s1")
else:
    print(f"Element {element} not found in s1")

print("\n=============== Identity ==============")
print("s1 is s2:", s1 is s2)
print("s1 == s2:", s1 == s2)
print("s1 is clone:", s1 is clone)
print("s1 == clone:", s1 == clone)

print("\n=============== Comparison ==============")
s3 = {1, 2, 3}
s4 = {1, 2, 3, 4, 5, 6}
print("s3 is subset of s4:", s3.issubset(s4))
print("s4 is superset of s3:", s4.issuperset(s3))
print("s1 and s3 are disjoint:", s1.isdisjoint(s3))

print("\n=============== Emptiness ==============")
empty_set = set()
print("empty_set is empty:", len(empty_set) == 0)
print("s1 is empty:", len(s1) == 0)
print()


# ################################ Built-In Functions ###############################
print("################################ Built-In Functions ###############################")
s = {randint(10, 99) for _ in range(20)}
print(len(s))
print(max(s))
print(min(s))
print(sum(s))
print(sorted(s))
print(any(s))
print(all(s))

# reversed() not work with set

# ################################ Built-In Methods ###############################
print("################################ Built-In Methods ###############################")
s = {1, 2, 3}
s.add(4)
print(s)

t = {5, 6, 7}
s.update(t)
print(s)

u = s.copy()
print(s)
print(id(s), id(u))

s.remove(2)
print(s)

s.discard(7)
print(s)

s.clear()
print(s)

s = {1, 2, 3, 4, 5, 6, 7}
t = {2, 4, 6}
print(s.issuperset(t))
print(s.issubset(t))
print(s.isdisjoint(t))

# ################################ Mathematical Operation ###############################
print("################################ Mathematical Operation ###############################")
s1 = {1, 2, 3, 4, 5, 6}
s2 = {2, 4, 6, 8}

# Union
print("union: ", s1 | s2)

# Intersection
print("intersection: ", s1 & s2)

# Difference
print("difference: ", s1 - s2)

# Symmetric Difference
print("symmetric difference: ", s1 ^ s2)

print(s1 >= s2)
print(s1 <= s2)
