def main():
    try:
        import re
        txt = "The rain in Spain."
        x = re.findall("[a-m]", txt)
        print(x)

        txt = "That wil be 69 dollars"
        x = re.findall("\d", txt)
        print(x)

        txt = "Hello Planet"
        x = re.findall("H.l.o", txt)
        print(x)

        txt = "Birds are beauty of nature"
        x = re.findall("^Bi", txt)  # start with
        print(x)
        x = re.findall("ure$", txt)  # ends on
        print(x)

        txt = "heo hello helo planet"
        x = re.findall("he.*o", txt)
        print(x)
        txt = "heo hello helo planet"
        x = re.findall("he.+o", txt)
        print(x)
        x = re.findall("he.?o", txt)
        print(x)
        x = re.findall("he.{2}o", txt)
        print(x)
        x = re.findall("he.{1}o", txt)
        print(x)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
