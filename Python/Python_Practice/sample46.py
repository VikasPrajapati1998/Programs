import os


def main():
    if os.path.exists("Files"):
        with open("Files/file03.txt", '+w') as f:
            while True:
                msg = input("Enter the message : ")
                if msg == '' or msg == 'end':
                    break
                f.writelines(msg)
                f.writelines('\n')


if __name__ == "__main__":
    main()
