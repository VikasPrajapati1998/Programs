import sys
sys.setrecursionlimit(10**2)

def factorial(n):
    try:
        if n == 1:
            return 1
        else:
            fact = n * factorial(n-1)
            return fact
    except Exception as e:
        print("Error: ", e)
    
fact = factorial(7)
print(fact)


