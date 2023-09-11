import os


def main():
    try:
        with open('Files/Numbers', 'wb') as f:
            f.write(b'9161589883\n')
            f.write(b'7778456743\n')
            f.write(b'8432459878\n')

        with open('Files/Numbers', 'rb') as f:
            f.seek(0)
            print(f.tell)
            data = f.readline()
            print(data)

    except Exception as e:
        print(e)


if __name__ == '__main__':
    main()

