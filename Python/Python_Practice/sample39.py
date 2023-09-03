def make_pretty(func):
    print("I make pretty.")

    def inner():
        print("I got decorated")
        func()

    return inner


@make_pretty
def ordinary():
    print("I am ordinary")


if __name__ == '__main__':
    ordinary()
