import os
import re


def convert(num):
    for x in ['bytes', 'KB', 'MB', 'GB', 'TB']:
        if num < 1024.0:
            return "%3.1f %s" % (num, x)
        num /= 1024.0


def file_size(file_path):
    if os.path.isfile(file_path):
        file_info = os.stat(file_path)
        return convert(file_info.st_size)


def main():
    size = None
    file_path = r'D:\Programs\Python Programs\pycharmProject\Sample'
    pattern = r'.py$'
    files = os.listdir(file_path)
    if os.path.exists(file_path):
        for filename in files:
            actual_path = os.path.join(file_path, filename)
            if re.findall(pattern, filename):
                print(file_size(actual_path))
    else:
        print("Path does not exist.")


if __name__ == '__main__':
    main()
