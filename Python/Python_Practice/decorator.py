# ===================================================
def my_decorator1(fun):
    def wrapper():
        print("==========================")
        fun()
        print("==========================")
    wrapper()


def display1():
    print("Hello Programmer.")

my_decorator1(display1)

# ===================================================



# ===================================================
def my_decorator2(func):
    def wrapper():
        print("==========================")
        func()
        print("==========================")
    return wrapper

def display2():
    print("Hello Developer")

display = my_decorator2(display2)
display()
# ===================================================



# ===================================================
def my_decorator3(func):
    def wrapper():
        print("==========================")
        func()
        print("==========================")
    return wrapper

@my_decorator3
def display3():
    print("Hi User")

display()
# ===================================================


