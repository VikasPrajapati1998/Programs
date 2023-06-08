import mysql.connector


def main():
    # show the name of databases
    mydb = mysql.connector.connect(
        host="localhost",
        user="root",
        passwd="admin#rohan@420"
    )

    mycursor = mydb.cursor()

    mycursor.execute("SHOW DATABASES")
    for db in mycursor:
        print(*db)


if __name__ == "__main__":
    main()
