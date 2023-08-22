class Sample:
    count = 94
    def __init__(self):
        self.pub = 10
        self._proc = 20
        self.__priv = 30

    def __init__(self, pub, proc, priv):
        self.pub = pub
        self._proc = proc
        self.__priv = priv

    def display(self):
        print("Display : ", self.pub, self._proc, self.__priv)

    def getData(self):
        return (self.pub, self._proc, self.__priv)

    @staticmethod
    def getMax(a, b, c):
        '''
        staticmethod have no relation with instance variable and instance method.
        They are not part of class. Staticmethod can be called using object of class
        and class name. These methods takes separate parameters and perform operation
        on it.
        :param a:
        :param b:
        :param c:
        :return: max
        '''
        print("@staticmethod getMax", end="")
        return max(a, b, c)

    @staticmethod
    def showData(obj):
        obj.display()

    @classmethod
    def updateData(cls):
        obj = cls(11, 22, 33)
        obj.display()


def main():
    try:
        s = Sample(1, 2, 3)
        # instance method
        s.display()
        pub, proc, priv = s.getData()

        # staticmethod
        print("-----------------------staticmethod----------------------------")
        m = s.getMax(pub, proc, priv)
        print("Max = ", m)
        m = Sample.getMax(34, 23, 47)
        print("Max = ", m)

        Sample.showData(s)

        # classmethod
        print("-------------------------classmethod-----------------------------")
        s.updateData()
        Sample.updateData()

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()
