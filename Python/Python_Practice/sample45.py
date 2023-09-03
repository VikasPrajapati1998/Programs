import os


def main():
    if os.path.exists("Files"):
        with open("Files/file02.txt", '+a') as f:
            while True:
                msg = input("Enter the message : ")
                if msg == '' or msg == 'exit':
                    break
                f.write(msg)
                f.write('\n')


if __name__ == "__main__":
    main()
