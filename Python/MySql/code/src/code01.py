import mysql.connector


def main():
    mydb = mysql.connector.connect(host="localhost", user="root", passwd="admin#rohan@420", database="badshah")
    print(mydb)


if __name__ == "__main__":
    main()



