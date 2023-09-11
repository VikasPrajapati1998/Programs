import os
import shutil


def main():
    try:
        if os.path.exists("Files/folder1/"):
            print("File Exist.")
            os.chdir("Files/folder1/")
            print("pwd : ", os.getcwd())
            os.makedirs('.\\fold1\\dir1')
            f = open('myfile1.txt', 'w')
            f.write("This is the dummy text for this file.")
            f.close()

            # check status of file
            stats = os.stat('myfile1.txt')
            print("Statistics of file : ")
            print("Size = ", stats.st_size)
            print("Mode = ", stats.st_mode)

        else:
            print("File does not Exist.")

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()

