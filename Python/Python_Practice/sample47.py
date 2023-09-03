import os


def main() -> None:
    if os.path.exists("Files/rtos.txt"):
        with open("Files/rtos.txt", "r+") as f:
            print(f.tell())
            print(f.seek(0))
            print(f.seek(0, 0))
            print(f.seek(0, 1))
            print(f.seek(0, 2))
            print(f.seek(2000, 0))
            print(f.tell())
            print(f.seek(0, 2))


if __name__ == "__main__":
    main()
