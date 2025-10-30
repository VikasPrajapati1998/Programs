number_list = [1, 2, 3, 4, 5]
print(number_list)

name_list = ["Sajnay", "Amit", "Sunil", "Sumit"]
print(name_list)

number_list1 = [10]*5
print(number_list1)

# list comprehension
lst = [x for x in range(2, 100, 2)]
print(lst[10:20])
print(lst[10:20:2])
print(lst[20:10:-1])
print(lst[50:10:-2])
print("Reverse: ", lst[::-1])

animals = ['zebra', 'lion', 'dog', 'cat', 'tiger', 'dear', 'cow', 'tiger', 'fox', 'wolf']
for index, animal in enumerate(animals):
    print((index, animal), end=', ')
print('\n')

# Mutability
print("============= Mutability =============")
ages = [25, 26, 25, 27, 28, 25]
animals[2] = "Rhinoceros"
ages[5] = 31
print(animals)
print(ages)

ages[2:5] = [24, 25, 32]
print(ages, '\n')

# Concatenation & Merging
print("============= Concatenation & Merging =============")
lst1 = [x for x in range(1, 5)]
print(lst1)
lst2 = [x**2 for x in range(1, 10) if x%2==0]
print(lst2)
lst = lst1 + lst2
print(lst)
try:
    lst  = lst + 3
except TypeError as te:
    print("Error: ", te)

lst1 = [2, 4, 6, 8]
print("lst1: ", lst1)
lst2 = [1, 3, lst1, 5, 7, 9]
print("lst2: ", lst2)
lst3 = [2, 3, 5, *lst1, 7, 9]
print("lst3: ", lst3)
print()

# Converstion
print("============ Conversion =============")
lst = list("Africa")
print(lst)

sentence = "How fast you can get the code ?"
lst = list(sentence)
print(lst)

lst = sentence.split(" ")
print(lst)

sentence = '-'.join(lst)
print(sentence)
print()

# Alising
print("=============== Alising ==============")
lst1 = [1, 2, 3, 4, 5]
lst2 = [1, 2, 3, 4, 5]
lst3 = lst1
print(id(lst1), id(lst2))
print((id(lst1), id(lst3)))


# Cloning
print("=============== Cloning ==============")
lst = [x*2 for x in range(1, 10)]
print("lst: ", id(lst))
lst1 = []
lst1 = lst1 + lst
print("lst1: ", id(lst1))

lst2 = lst.copy()
print("lst2: ", id(lst2))

lst3 = lst
print("lst3: ", id(lst3))
print()

# Searching and Identity
print("=============== Searching & Identity ================")
print(4 in lst)
print(3 not in lst)

print(7 in lst)
print(8 not in lst)
print()

print("lst3 is lst: ", lst3 is lst)
print("lst2 is not lst: ", lst2 is not lst)
print("lst1 is lst: ", lst1 is lst)
print("lst3 is not lst: ", lst3 is not lst)

num1 = 34
num2 = 34
print(f"num1: {num1}, num2: {num2}")

s1 = "Hello"
s2 = "Hello"
print(f"s1: {s1}, s2: {s2}")

print("num1 is num2: ", num1 is num2)
print("s1 is s2: ", s1 is s2)

num1 = 32
print(f"num1: {num1}, num2: {num2}")
print("num1 is num2: ", num1 is num2)

# ================== Comparison ===================
print("================== Comparison ===================")
lst1 = [1, 2, 3, 4, 5]
lst2 = [1, 2, 3, 4, 5]
print("lst1: ", lst1)
print("lst2: ", lst2)
print("lst1 > lst2: ", lst1 > lst2)
print("lst1 < lst2: ", lst1 < lst2)
print("lst1 >= lst2: ", lst1 >= lst2)
print("lst1 <= lst2: ", lst1 <= lst2)
print()

lst2 = [2, 4, 5, 6, 8]
print("lst1: ", lst1)
print("lst2: ", lst2)
print("lst1 > lst2: ", lst1 > lst2)
print("lst1 < lst2: ", lst1 < lst2)
print("lst1 >= lst2: ", lst1 >= lst2)
print("lst1 <= lst2: ", lst1 <= lst2)
print()
# ================== Emptiness ====================
print("================== Emptiness ====================")
lst = []
print(lst, bool(lst))
print("\n")

# ###################################### Using Built-in Functions on Lists #########################################
print("################################# Using Built-in Functions on Lists #########################################")
from random import randint
lst = [0]*10
print(lst)
print("Length: ", len(lst))
print("Max: ", max(lst))
print("Min: ", min(lst))
print("Sum: ", sum(lst))
print("Any: ")
print(any(lst))
lst[5] = 5
print(lst)
print(any(lst))

print("All: ")
lst = [randint(1, 9) for _ in range(0, 10)]
print(lst)
print(all(lst))
lst[5] = 0
print(lst)
print(all(lst))

del(lst[3:7])
print(lst)
lst = []
print(lst)
try:
    del(lst)
    print(lst)
except NameError as ne:
    print("Error: ", ne)

lst = [randint(1, 9) for _ in range(0, 10)]
print(lst)
sorted_lst = sorted(lst)
print(sorted_lst)

sorted_lst = sorted(lst, reverse=True)
print(sorted_lst)

reversed_lst = list(reversed(lst))
print(reversed_lst)
print()

# ################################################ List methods #####################################################
print("########################################### List Methods #####################################################")
lst = [randint(1, 9) for _ in range(0, 10)]
print(lst)

lst.append(34)
print(lst)

lst.append(18)
print(lst)

lst.append([3, 4, 5])
print(lst)

lst.append((11, 12, 13))
print(lst)

lst.remove(34)
print(lst)

try:
    lst.remove(44)
    print(lst)
except ValueError as ve:
    print("Error: ", ve)

lst.remove([3, 4, 5])
print(lst)

lst.append(34)
lst.append(56)
print(lst)

lst.pop()
print(lst)

lst.pop(11)
print(lst)

lst.insert(5, 45)
print(lst)

print(lst.count(2))

print(lst.index(18))

lst.sort()
print(lst)

lst.sort(reverse=True)
print(lst)

name = "Sanjay"
print(name)
print([*name])
print(list(name))
print("\n\n")

# //////////////////////////////// Nesting Sorting //////////////////////////////////////////////
import operator
lst = [("Ajay", 28, 34.56), ("Ram", 21, 54.34), ("Shyam", 24, 18.54), ("Vijay", 25, 93.56)]
print(isinstance(lst, list))
print(sorted(lst))
print()

print(sorted(lst, key=operator.itemgetter(2)))
print(sorted(lst, key=operator.itemgetter(2), reverse=True))
print()

print(sorted(lst, key=operator.itemgetter(1)))
print(sorted(lst, key=operator.itemgetter(1), reverse=True))
print()
