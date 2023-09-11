import sys, os, shutil

print(os.getcwd())
print(sys.argv)
argc = len(sys.argv)
if argc != 3:
    print('Incorrect usage.')
    print('Correct Usage: filecopy source target')
else:
    # sys.argv[0]  : current file name
    source = sys.argv[1]  # first file name or -s
    target = sys.argv[2]  # second file name or -t
    shutil.copyfile(source, target)

