class InsufficientBalanceError(Exception):
    def __init__(self, accno, cb):
        self.__accno = accno
        self.__curbal = cb
        print("InsufficientBalanceError : ", end='')

    def get_details(self):
        dct = {'Acc no': self.__accno, 'Current Balance': self.__curbal}
        return dct


class Customers:
    def __init__(self):
        self.__dct = {}

    def append(self, accno, n, bal):
        self.__dct[accno] = {'Name': n, 'Balance': bal}

    def deposit(self, accno, amt):
        d = self.__dct[accno]
        d['Balance'] = d['Balance'] + amt
        self.__dct[accno] = d

    def withdraw(self, accno, amt):
        d = self.__dct[accno]
        curbal = d['Balance']
        if curbal-amt < 5000:
            raise InsufficientBalanceError(accno, curbal)
        else:
            d['Balance'] = d['Balance'] - amt
            self.__dct[accno] = d

    def display(self):
        for k, v in self.__dct.items():
            print(k, v)


def main():
    try:
        c = Customers()
        accno = input("Enter the account number : ")
        name = input("Enter the account holder name : ")
        amt = int(input("Enter the amount you want append : "))
        c.append(accno, name, amt)
        c.display()

        amt = int(input("Enter the amount you want to deposit : "))
        c.deposit(accno, amt)
        c.display()

        amt = int(input("Enter the amount you want to withdraw : "))
        c.withdraw(accno, amt)
        c.display()

    except InsufficientBalanceError as ibe:
        print(ibe)
        print(ibe.get_details())

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()

