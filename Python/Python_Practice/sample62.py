# Assertion with assertion message

def main():
    try:
        a = int(input("Enter a : "))
        b = int(input("Enter b : "))
        assert b != 0, 'Check Denominator, it appears to be 0'
        c = a/b
        print('Result = ', c)

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()

