import time

def execution_time(func):
    def wrapper(num):
        start_time = time.perf_counter()
        value = func(num)
        end_time = time.perf_counter()
        exe_time = end_time - start_time
        print(f"{func.__name__}: {exe_time:.8} sec")
        return value
    return wrapper

@execution_time
def add_natural_numbers(n):
    total = 0
    current = 1
    while current <= n:
        total = total + current
        current = current + 1
    return total


n = 100000000
result = add_natural_numbers(n)
print(result)
