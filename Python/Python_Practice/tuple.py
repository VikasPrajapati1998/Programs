tpl = ()
print(tpl, type(tpl))

tpl = (10)
print(tpl, type(tpl))

tpl = (10, )
print(tpl, type(tpl))

tpl = (10, 20, 30, 40)
print(tpl, type(tpl))

tpl = ("Sanjay", 25, 345.56)
print(tpl, type(tpl))

tpl = 'Arjun', 18254, 74.56
print(tpl, type(tpl))

msg = ('Handle', 'Exception', 'Like', 'a', 'Boss')
print(msg[1], msg[3])

emp = ('Sanjay', 23.34, 1760, 2040)
print(emp[1:3])

for index, value in enumerate(emp):
    print(index, value)

try:
    msg = ("Fall", "in", "Line")
    msg[0] = "FALL"
    msg[1:3] = ('Above', 'Mark')
except Exception as e:
    print("Error: ", e)

# ######################################### Features ########################################
tpl1 = (1, 2, 3, 4, 5)
tpl2 = (10, 20, 30, 40, 50)
print("tpl1: ", tpl1)
print("tpl2: ", tpl2)

# Concatenation & Merging
tpl = tpl1 + tpl2
print("tpl: ", tpl)

# Conversion
lst = list(tpl)
print(lst)

# Aliasing
tpl = tuple([x for x in range(2, 100, 2)])
print(tpl)
print(type(tpl))

# Cloning
tpl3 = tpl
print("tpl3: ", tpl3, id(tpl3))

tpl4 = tuple(list(tpl).copy())
print("tpl4: ", tpl4, id(tpl4))

# Searching
tpl = tuple([x for x in range(2, 100, 2)])
print(tpl[10:40])
print(tpl[40])
print(tpl[0:50:2])
print(tpl[50:0:-2])
print(tpl[::-1])
print(tpl[::1])

print(50 in tpl)
print(51 not in tpl)
print(20 not in tpl)
print(21 in tpl)

tpl1 = (1, 2, 3, 4, 5, 6)
tpl2 = (1, 2, 3, 4, 5, 6)
print(tpl1 is tpl2)
print(tpl1 is not tpl2)

# Comparison
tpl1 = (1, 2, 3, 4, 5, 6)
tpl2 = (1, 2, 3, 4, 5, 6)
print("tpl1: ", tpl1)
print("tpl2: ", tpl2)
print("tpl1 > tpl2: ", tpl1 > tpl2)
print("tpl1 < tpl2: ", tpl1 < tpl2)
print("tpl1 >= tpl2: ", tpl1 >= tpl2)
print("tpl1 <= tpl2: ", tpl1 <= tpl2)
print()

tpl2 = (2, 3, 4, 5, 6, 8)
print("tpl1: ", tpl1)
print("tpl2: ", tpl2)
print("tpl1 > tpl2: ", tpl1 > tpl2)
print("tpl1 < tpl2: ", tpl1 < tpl2)
print("tpl1 >= tpl2: ", tpl1 >= tpl2)
print("tpl1 <= tpl2: ", tpl1 <= tpl2)
print()

# Emptiness
print(bool(tpl))
tpl = ()
print(bool(tpl))
print()

# ############################## Built-in Functions on Tuples ###############################
from random import randint
tpl = tuple([randint(1, 9) for _ in range(20)])
print("tpl: ", tpl)
print(len(tpl))
print(max(tpl))
print(min(tpl))
print(sum(tpl))
print(any(tpl))
print(all(tpl))
print(tuple(reversed(tpl)))
print(sorted(tpl))
print(sorted(tpl, reverse=True))
print()

# ############################### Built-in Methods ############################################
from random import randint
tpl = tuple([randint(1, 9) for _ in range(20)])
print("tpl: ", tpl)
print(tpl.count(5))
print(tpl.index(5))
print()

tpl1 = (2, 4, 6, 8)
print("tpl1: ", tpl1)
tpl2 = (1, 3, tpl1, 5, 7, 9)
print("tpl2: ", tpl2)
tpl3 = (2, 3, 5, *tpl1, 7, 9)
print("tpl3: ", tpl3)
print('\n\n')

# //////////////////////////////// Nesting Sorting //////////////////////////////////////////////
import operator
tpl = (("Ajay", 28, 34.56), ("Ram", 21, 54.34), ("Shyam", 24, 18.54), ("Vijay", 25, 93.56))
print(isinstance(tpl, tuple))
print(sorted(tpl))
print()

print(sorted(tpl, key=operator.itemgetter(2)))
print(sorted(tpl, key=operator.itemgetter(2), reverse=True))
print()

print(sorted(tpl, key=operator.itemgetter(1)))
print(sorted(tpl, key=operator.itemgetter(1), reverse=True))
print()
