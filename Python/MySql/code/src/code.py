import mysql.connector


def main() -> None:
    """
    Main function, Program execution start from here.
    Update the table values
    :parameter: None
    :return: N
    :parameter:
        ConnectionFail: If Connection of mysql server fail to python.
        AnyError: If anything inappropriate happen.
    """
    try:
        mydb = mysql.connector.connect(
            host="localhost",
            user="root",
            passwd="admin#rohan@420"
        )
        mycursor = mydb.cursor()
        print("List of Available Database : ")
        mycursor.execute("Show databases;")
        for db in mycursor:
            print(*db)

        print()
        db = input("Enter the database name which you want to use : ")
        showdata(db)

        mydb = mysql.connector.connect(
            host="localhost",
            user="root",
            passwd="admin#rohan@420",
            database=f"{db}"
        )
        mycursor = mydb.cursor()
        print()
        table_name = input("Enter the table name to update : ")
        name = input("Enter the name you want to update : ")
        salary = int(input("Enter the salary : "))
        query = f"UPDATE {table_name} SET sal={salary} WHERE name='{name}';"
        mycursor.execute(query)
        mydb.commit()

        showdata(db)

    except Exception as e:
        print(e)


def showdata(db: str) -> None:
    """
    Show the content of table.
    :parameter:
        db(str): Name of database
    :return: N
    :raises:
        ConnectionError: If connection fail to MySQL server.
        AnyError: If anything inappropriate happen.
    """
    print("---------------------------------------------------------")
    try:
        mydb = mysql.connector.connect(
            host="localhost",
            user="root",
            passwd="admin#rohan@420",
            database=f"{db}"
        )
        mycursor = mydb.cursor()
        print()
        print("List of Available Tables : ")
        mycursor.execute("Show tables;")
        for tb in mycursor:
            print(*tb)

        print()
        table_name = input("Enter the name of table to see data : ")
        mycursor.execute(f"SELECT * FROM {table_name};")
        table = mycursor.fetchall()
        for tb in table:
            print(*tb)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()

# n = input("Enter name : ")
# s = f'"{n}"'
# print(s)
