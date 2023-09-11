def main():
    try:
        a = 45.8
        assert type(a) == int, 'Type is not int.'
        print(a)
    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()


