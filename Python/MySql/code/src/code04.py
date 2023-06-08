import mysql.connector

def main():
    # create database
    mydb = mysql.connector.connect(
        host="localhost",
        user="root",
        passwd="admin#rohan@420"
    )
    mycursor = mydb.cursor()

    query = "CREATE DATABASE arjundb"
    mycursor.execute(query)
    mycursor.execute("SHOW DATABASES")
    for db in mycursor:
        print(db)



if __name__ == "__main__":
    main()


