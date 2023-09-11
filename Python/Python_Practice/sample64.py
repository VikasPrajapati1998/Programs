# decorators
def my_decorator(func):
    def wrapper():
        print("-----------------------------------")
        print("I am in ", end='')
        func()
        print("-----------------------------------")

    return wrapper()


@my_decorator
def display():
    print('display.')


@my_decorator
def show():
    print('show.')


# display()
# show()
