# Documentation Strings
def display() -> None:
    """
    Display the message.

    :param: None
    :return: N
    :raise: If anything happen inapropriate.
    """
    print("Hello Programmer. Welcome to programming.")


def show(var: str = '') -> None:
    """
    Show the message of the user.

    :param: None
    :return: N
    :raise: If anything happen inapropriate.
    """
    print(var, end='')


def main() -> None:
    print("Display : ", end='')
    display()

    print("Show : ", end='')
    show("Arjun Prajapati")


if __name__ == '__main__':
    main()

