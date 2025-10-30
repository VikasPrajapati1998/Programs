# ====== Dictionary Creation ======
keys = [chr(k) for k in range(ord('a'), ord('k'))]  # 'a' to 'j' (10 letters)
values = [v - 96 for v in range(ord('a'), ord('k'))]  # 1 to 10
dct = {key: value for key, value in zip(keys, values)}
print("Original dict (letter -> number):")
print(dct)

# ====== Iteration Examples ======
print("\nEnumerating items:")
for index, (key, value) in enumerate(dct.items()):
    print((index, key, value), end=', ')
print('\n')

print("Enumerating keys:")
for index, key in enumerate(dct.keys()):
    print((index, key), end=', ')
print('\n')

print("Enumerating values:")
for index, value in enumerate(dct.values()):
    print((index, value), end=', ')
print('\n')

# ====== Reverse Mapping (number -> letter) ======
dct_reversed = {value: key for key, value in zip(keys, values)}
print("Reversed dict (number -> letter):")
print(dct_reversed)

# Assign back to dct for next section (as per your line)
dct = dct_reversed

# ############################## Operations #################################
print("\n# ====== Dictionary Operations ======")

# 1. Conversion
print("Conversion to list of keys:", list(dct))
print("Conversion to list of keys:", list(dct.keys()))
print("Conversion to list of values:", list(dct.values()))
print("Conversion to list of items:", list(dct.items()))

# 2. Cloning (shallow copy)
dct_clone = dct.copy()
print("Cloned dict:", dct_clone)

# 3. Identity (checking if two dicts are the same object)
print("dct is dct_clone?", dct is dct_clone)  # False
print("dct == dct_clone?", dct == dct_clone)  # True

# 4. Emptiness
empty_dict = {}
print("Is empty_dict empty?", len(empty_dict) == 0)
print("Boolean of empty dict:", bool(empty_dict))  # False

# 5. Aliasing
alias = dct  # alias points to same object
print("dct is alias?", dct is alias)  # True
alias[99] = 'z'  # modifies original dct
print("After aliasing modification, dct has key 99:", 99 in dct)

# 6. Searching
print("Is key 1 in dct?", 1 in dct)           # True
print("Is value 'a' in dct values?", 'a' in dct.values())  # True
print("Get value safely:", dct.get(100, "Not found"))

# ############################## Built-in Functions ####################################
print("\n# ====== Built-in Functions on dct (keys are integers 1–10 + 99) ======")
print("len(dct):", len(dct))
print("max(dct):", max(dct))      # max key
print("min(dct):", min(dct))      # min key
print("sum(dct):", sum(dct))      # sum of keys (only works if keys are numeric!)
print("sorted(dct):", sorted(dct))  # sorted list of keys
print("any(dct):", any(dct))      # True if any key is truthy (all are, since keys are positive ints)
print("all(dct):", all(dct))      # True if all keys are truthy
print("list(reversed(dct)):", list(reversed(dct)))  # reversed order of keys (insertion order preserved in Python 3.7+)

# Note: Since we added key 99 via alias, keys are [1,2,...,10,99]

# ############################## Built-in Methods ######################################
print("\n# ====== Dictionary Methods ======")
dct = {'a': 1, 'b': 2, 'c': 3}
print("Starting dict:", dct)

# Add new key-value
dct['d'] = 4
print("After adding 'd': 4 →", dct)

# Get with default
print("dct.get('b', None):", dct.get('b', None))
print("dct.get('x', 'missing'):", dct.get('x', 'missing'))

# Pop a key
popped = dct.pop('a')
print(f"Popped 'a': {popped}, dict now: {dct}")

# Other useful methods
print("Keys:", dct.keys())
print("Values:", dct.values())
print("Items:", dct.items())

# Update
dct.update({'e': 5, 'f': 6})
print("After update:", dct)

# Clear
dct.clear()
print("After clear:", dct)

# fromkeys
lst = ['a', 'b', 'c', 'd', 'e']
print("fromkeys: ", dict.fromkeys(lst, 25))

lst1 = ['a', 'b', 'c', 'd', 'e']
lst2 = [1, 2, 3, 4, 5]
print("fromkeys: ", dict.fromkeys(lst1, lst2))

print("dict: ", dict(zip(lst1, lst2)))

