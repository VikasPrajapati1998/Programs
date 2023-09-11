import os


def main():
    try:
        print(os.name)
        print("pwd : ", os.getcwd())
        print("Current Directory : ", os.listdir('.'))
        print("Parent of Current Directory : ", os.listdir('..'))

        if os.path.exists("Files/data"):
            print("data exist.")
        else:
            print("data not exist.")

        os.mkdir("Files/folder1")
        os.chdir("Files/folder1/")
        print("pwd : ", os.getcwd())

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()

