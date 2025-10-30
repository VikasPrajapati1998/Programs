def print_it(i, j, *args, x, y, **kwargs):
    try:
        print()
        print(i, j, end=', ')
        for var in args:
            print(var, end=', ')
        print(x, y, end=', ')
        for key, value in kwargs.items():
            print((key, value), end=', ')
        print()
    except Exception as e:
        print(e)

print_it(10, 20, x=30, y=40)
print_it(10, 20, 100, 200, x=30, y=40)
print_it(10, 20, 100, 200, x=30, y=40, a=5, b=6, c=7, d=8)

