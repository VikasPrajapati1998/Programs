import mysql.connector


def main() -> None:
    """
    Delete the value from the tabel.
    :parameter: None
    :return: N
    :raises:
        ConnectionError: If MySQL server connection fail to python.
        AnyError: If anything happen inappropriate.
    """
    try:
        mydb = mysql.connector.connect(
            host="localhost",
            user="root",
            passwd="admin#rohan@420",
            database="arjundb"
        )
        showdata()
        mycursor = mydb.cursor()
        name = input("Enter the name you want to delete : ")
        query = f"DELETE FROM employee WHERE name='{name}'"
        print(query)
        mycursor.execute(query)
        mydb.commit()
        showdata()

    except Exception as e:
        print(e)


def showdata() -> None:
    """
    Show the content of table.
    :parameter: None
    :return: N
    :raises:
        ConnectionError: If connection fail to MySQL server.
        AnyError: If anything happen inappropriate.
    """
    try:
        mydb = mysql.connector.connect(
            host="localhost",
            user="root",
            passwd="admin#rohan@420",
            database="arjundb"
        )
        mycursor = mydb.cursor()
        mycursor.execute("Select * from employee;")
        table = mycursor.fetchall()
        for tb in table:
            print(*tb)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()



'''
@author: Arjun Prajapati
@date: June 9th 2023 02:10am.
'''