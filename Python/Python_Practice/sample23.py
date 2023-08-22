class String:
    def __init__(self, s=''):
        self.__str = s

    def display(self):
        print(self.__str)
    def __int__(self):
        return int(self.__str)

def main():
    try:
        s1 = String(123)
        s1.display()
        print(type(s1))
        
        i = int(s1)
        print(i, type(i))

    except Exception as e:
        print(e)

if __name__ == "__main__":
    main()
