def main():
    try:
        name = "arJun praJapaTi 1998"
        print(name)
        print(name.capitalize())
        print(name.casefold())
        print(name.center(50))
        print(name.count('a'))
        print(name.encode())
        print(name.endswith('8'))
        n = "H\te\tl\tl\to"
        print(n.expandtabs(2))
        print(name.find('J'))
        print(name.find("Ja"))
        txt = "For only {price:.2f} dollars!"
        print(txt.format(price=49.875))
        student = ("Rohan", "Arjun", "Sanu", "Akash")
        s = ", ".join(student)
        print(s)
        seperator = ", Mr. "
        s = seperator.join(student)
        print(s)
        print(name.index('p'))
        print(name.index('JapaTi'))

        print(name.isalpha())
        print(name.isnumeric())
        print(name.isalnum())
        print(name.isdecimal())

        print(name.islower())
        print(name.isupper())
        print(name.isascii())
        print(name.isspace())

        print(name.lstrip())
        print(name.rstrip())
        print(name.strip())

        print(name.upper())
        print(name.lower())

        print(name.split(" "))
        print(name.split('a'))

        print(name.title())

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
