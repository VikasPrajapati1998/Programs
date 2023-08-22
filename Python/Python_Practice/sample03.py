def main():
    try:
        x = bytearray(4)
        print(x)
        x = bytes(4)
        print(x)
        y = compile('print(55)', 'test', 'eval')
        exec(y)
        print(dict())
        print(dir())

        d = divmod(23, 4)
        print(d)

        x = ("apple", "banana", "cherry")
        y = enumerate(x)
        print(y)
        for k in y:
            print(k)

        prog = 'print("Arjun Prajapati")'
        eval(prog)

        code = ('name = "John"\n'
                'print("Name = ", name)\n'
                'print("Salary = ", 70000)')
        exec(code)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
