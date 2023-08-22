# insert data in collection
import pymongo as pm
myclient = pm.MongoClient("mongodb://localhost:27017/")
print(myclient.list_database_names())
mydb = myclient["sanu"]
print(mydb.list_collection_names())
mycol = mydb["employees"]

mylist = [
    {
        "_id": 1,
        "Name": {"First": "Sudhanshu", "Last": "Mishra"},
        "Course": "B.Tech."
    },
    {
        "_id": 2,
        "Name": {"First": "Arjun", "Last": "Prajapati"},
        "Course": "B.Tech."
    },
    {
        "_id": 3,
        "Name": {"First": "Madhvi", "Last": "Mishra"},
        "Course": "B.Tech."
    },
    {
        "_id": 4,
        "Name": {"First": "Jyoti", "Last": "Sharma"},
        "Course": "B.Tech."
    },
    {
        "_id": 5,
        "Name": {"First": "Shailendra", "Last": "Prajapati"},
        "Course": "B.Tech."
    },
    {
        "_id": 6,
        "Name": {"First": "Rajan", "Last": "Gangwar"},
        "Course": "B.Tech."
    },
    {
        "_id": 7,
        "Name": {"First": "Akash", "Last": "Singh"},
        "Course": "B.Tech."
    }
]
mycol.insert_many(mylist)

for k in mycol.find():
    print(k)
print()

