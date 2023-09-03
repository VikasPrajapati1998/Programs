# Serialization and Deserialization

import os
import json


def main() -> None:
    if os.path.exists("Files"):
        # list serialization / deserialization
        with open("Files/file05.txt", "w+") as f:
            lst_s = [10, 20, 30, 40, 50]
            json.dump(lst_s, f)   # serialization
            f.seek(0)
            lst_d = json.load(f)    # deserialization
            print(lst_d)
            print(type(lst_s), type(lst_d))
            print()

        # tuple serialization / deserialization
        with open("Files/file06.txt", "w+") as f:
            tpl_s = ('Ajay', 23, 2455.55)
            json.dump(tpl_s, f)     # serialization
            f.seek(0)
            tpl_d = json.load(f)    # deserialization
            print(tpl_d)
            print(type(tpl_s), type(tpl_d))
            print()

        # dictionary serialization / deserialization
        with open("Files/file07.txt", "w+") as f:
            dct_s = {'Anil': 24, 'Ajay': 23, 'Nisha': 22}
            json.dump(dct_s, f)     # serialization
            f.seek(0)
            dct_d = json.load(f)    # deserialization
            print(dct_d)
            print(type(dct_s), type(dct_d))
            print()


if __name__ == "__main__":
    main()

