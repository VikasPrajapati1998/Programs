import os
import json


def main() -> None:
    try:
        list1 = [[1, 2, 3, 4],
                 [10, 20, 30, 40],
                 [11, 22, 33, 44]]

        tuple1 = ((2, 4, 6, 8),
                  (3, 6, 9, 12),
                  (4, 8, 12, 16))

        dictionary1 = {'Anil': {'DOB': '17/11/1998', 'Favorite': 'Igloo'},
                       'Amol': {'DOB': '14/10/1999', 'Favorite': 'Tundra'},
                       'Ravi': {'DOB': '19/11/1997', 'Favorite': 'Arctic'}}

        data = {'lst': list1, 'tpl': tuple1, 'dct': dictionary1}

        if os.path.exists('Files'):
            with open('Files/file08.txt', 'w+') as f:
                # Serialize the data to JSON and write to the file
                json.dump(data, f)

            # Reopen the file for reading
            with open('Files/file08.txt', 'r') as f:
                # Deserialize the JSON data
                data = json.load(f)
                print(data)

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
