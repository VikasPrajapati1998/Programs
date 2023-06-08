import mysql.connector


def main() -> None:
    """
    Insert value into table.
    :parameter: None
    :return: N
    :raises:
        ConnectionError: If fail the connection to the MySQL server.
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
        query = "INSERT INTO employee(name, sal) values(%s, %s)"
        emp = [("Harshit", 34000),
               ("Amit", 38000),
               ("Ankita", 56000),
               ("Rohan", 60000),
               ("Akash", 45000),
               ("Arjun", 88000),
               ("Rishi", 50000)]
        mycursor.executemany(query, emp)
        mydb.commit()

        mycursor.execute("SELECT * FROM employee;")
        table = mycursor.fetchall()
        for row in table:
            print(*row)

    except Exception as e:
        print(e)


if __name__ == "__main__":
    main()


'''
@author: Arjun Prajapati
@date: June 9th 2023 01:40am.
'''