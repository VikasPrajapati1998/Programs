name = "Transformer"
print(name)

print(list(name))

a = name[2]
print(a)

b = name[2:5]
print(b)

c = name[-1:-5:-1]
print(c)

d = name[1:7:2]
print(d)

e = name[9:1:-1]
print(e)

f = name[-9:-1:1]
print(f)

g = name[::-1]
print(g)

print("-"*10)

print('n' in name)
print('fo' in name)
print()


# string methods
print("Type: ", type(name))
print("Id: ", id(name))
print(name.upper())
print(name.lower())
print(name.capitalize())

paragraph = "A quick brown bird jumped over a lazy dog."
print(paragraph.upper())
print(paragraph.lower())
print(paragraph.capitalize())
print(paragraph.title())
print(paragraph.swapcase())
print()

# string methods
var = "Arjun@191198"
print(var.isalpha())
print()

# str 
from datetime import datetime

today = datetime.now()
print(str(today))
print(repr(today))

print(today.__str__())
print(today.__repr__())

print("This is a \t string.\n Python...!")
print(r"This is a \t string.\n Python...!")

