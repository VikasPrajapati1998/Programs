# File Handling
import os


# =================================================================
def main():
    print(os.name)
    print(os.getcwd())
    print(os.listdir('.'))
    print(os.listdir('..'))
    print()

    if os.path.exists('Files'):
        # read()
        f = open("Files/test.txt", 'r')
        print(f.read())   # read hole file at time and return as string
        f.close()
        print("--------------------------------------------------")
        f = open("Files/test.txt", 'r')
        print(f.read(16))  # read number of 16 character at a time and return as string
        f.close()

        # readline()
        print("--------------------------------------------------")
        f = open("Files/test.txt", 'r')
        print(f.readline())  # read a line at a time and return as string
        f.close()
        print("--------------------------------------------------")
        f = open("Files/test.txt", 'r')
        print(f.readline(2))  # read number of 2 character at a time and return as string
        f.close()

        # readlines()
        print("--------------------------------------------------")
        f = open("Files/test.txt", 'r')
        print(f.readlines())  # read all line at a time and return the list of lines
        f.close()
    else:
        print("Files does not exist.")


# ================================================================


if __name__ == "__main__":
    main()
