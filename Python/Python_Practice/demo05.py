def checkPrime(n):
    for x in range(2, int(n / 2) + 1):
        if n % x == 0:
            return False
    return True


def sumPrime(n):
    for x in range(2, int(n / 2) + 1):
        if checkPrime(x) and checkPrime(n - x):
            print(x, n - x)


num = int(input("Enter a number : "))
sumPrime(num)
