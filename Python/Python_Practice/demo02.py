x = int(input("Enter starting of loop : "))
y = int(input("Enter ending of loop : "))
z = int(input("Enter the setp of loop : "))

for i in range(x, y+1, z):
    print(i, pow(i, 2), pow(i, 3))
