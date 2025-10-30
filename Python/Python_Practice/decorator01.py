import time

def execution_time(func):
    def calculate(*args, **kwargs):
        start_time = time.perf_counter()
        value = func(*args, **kwargs)
        end_time = time.perf_counter()
        runtime = end_time - start_time
        print(f"{func.__name__!r}: {runtime:.8f} secs")
        return value
    return calculate


# ======================================
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
# =====================================

