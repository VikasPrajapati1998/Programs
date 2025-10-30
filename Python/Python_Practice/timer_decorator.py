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

@execution_time
def product(num):
    fact = 1
    for i in range(num):
        fact = fact * i + 1
    return fact

p = product(40)
print(p)

