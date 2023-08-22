import sys

a = "Hello User"
print(a)
print("Arjun", "Prajapati", "Vikas", "Prajapati", sep=", ", end="\n", flush=False, file=sys.stdout)
name = "Vikas Prajapati"
age = 25
gender = "Male"
print(f"My name is {name}.")
print("My name is {}.".format(name))
print("My name is {0}.".format(name))
print(f"My name is {name}. My age is {age}. I am {gender}.")
print("My age is {1} and my name is {0}.".format(name, age))
print("My name is {2} and my age is {1}. My gender is {0}.".format(gender, age, name))
