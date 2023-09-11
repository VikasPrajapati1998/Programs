# function as work as decorators

def my_decorator(func):
    def wrapper():
        print("-----------------------------------")
        print("I am in ", end='')
        func()
        print("-----------------------------------")
    return wrapper()


def display():
    print('display.')


def show():
    print('show.')


def main():
    try:
        my_decorator(display)
        my_decorator(show)

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()

