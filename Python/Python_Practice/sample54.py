import os
import shutil


def main():
    try:
        if os.path.exists("Files/folder1"):
            print("Path Exist.")
            os.chdir("Files/folder1/")
            print(os.listdir())
            print(os.getcwd())
            os.rename('myfile1.txt', 'text1.txt')
            print(os.listdir())
            shutil.copyfile('text1.txt', 'file1.txt')
            print(os.listdir())
            os.remove('text1.txt')
            print(os.listdir())

        else:
            print("Path does not exist.")

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
