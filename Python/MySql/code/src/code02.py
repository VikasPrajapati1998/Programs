import mysql.connector

def main():
    # check connection
    mydb = mysql.connector.connect(
        host="localhost",
        user="root",
        passwd="admin#rohan@420",
        database="badshah"
    )
    if(mydb):
        print("Connection Established.")
    else:
        print("Connection Failed.")

if __name__ == "__main__":
    main()
