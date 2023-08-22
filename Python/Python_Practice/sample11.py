def main():
    try:
        dictionary = {"Arjun": 89, "Rohan": 90, "Sanu": 86, "Rutuja": 88}
        dct = dictionary.copy()
        print(dct)
        dct.clear()
        print(dct)
        key = ("Pawan", "Shailendra", "Rajan", "Shubham")
        value = 0
        dct = dict.fromkeys(key, value)
        print(dct)
        dct = dictionary.copy()
        print(dct.keys())
        print(dct.values())
        print(dct.items())
        print(dct.get("Arjun"))
        dct.popitem()
        print(dct)
        dct.pop("Sanu")
        print(dct)
        dct.update({"Akash": 87, "Rishikesh": 83})
        print(dct)
        dct = dct.setdefault("Akash", 99)
        print(dct)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
