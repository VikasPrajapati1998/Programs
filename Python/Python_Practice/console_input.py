n1 = input("Enter value: ")
print(f"n1: {n1}")

n2, n3 = input("Enter two value: ").split()
print("n3: {0}, n3: {1}".format(n2, n3))

n4, n5, n6, n7, n8 = [int(n) for n in input("Values: ").split()]
print(f"n4={n4}, n5={n5}, n6={n6}, n7={n7}, n8={n8}")
 
n_list = [int(n) for n in input("Enter numbers: ").split()]
for value in n_list:
    print(value, end=', ')
print()

f1, f2 = [float(f) for f in input("Enter float numbers: ").split(',')]
print(f1, f2, sep='\t', end='\n')
