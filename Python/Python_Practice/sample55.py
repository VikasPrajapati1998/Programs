import os
import shutil


def main():
    try:
        print(os.getcwd())
        os.chdir("Files/folder1/")
        print(os.listdir())

        # absolute path
        currpath = os.path.abspath('.')
        print(currpath)
        currpath = os.path.join(currpath, 'file1.txt')
        print(currpath)
        if os.path.isfile(currpath):
            print("file1.txt file exist.")
        else:
            print("file1.txt file does not exist.")

        # create a dir
        print(os.getcwd())
        # os.chmod('dir2', 777,)
        # os.remove('dir2')
        os.makedirs('fold1/dir2')
        print(os.listdir())
        print(os.listdir("fold1/"))


    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()
