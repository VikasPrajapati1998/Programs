# Serialization and Deserialization
import os


def main() -> None:
    if os.path.exists("Files"):
        with open("Files/file04.txt", "w+") as f:
            a = int(input("Enter a : "))
            b = int(input("Enter b : "))

            # Write on file
            f.write(str(a)+'\n')
            f.write(str(b)+'\n')

            f.seek(0)

            # Read from file
            x = int(f.readline())
            y = int(f.readline())

            print("x =", x, ",", "y =", y)

            z = x + y
            print("x+y =", z)

            z = x - y
            print("x-y =", z)


if __name__ == "__main__":
    main()

