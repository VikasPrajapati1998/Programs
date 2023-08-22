# Python MongoDB Insert Document
import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]  # database
mycol = mydb["Students"]  # collection

mylist = [
    {
        "_id": 1,
        "Name": {"First": "Rohan", "Last": "Borse"},
        "Gender": "Male",
        "Address": "Maharashtra"
    },  # document
    {
        "_id": 2,
        "Name": {"First": "Kumar", "Last": "Sanu"},
        "Gender": "Male",
        "Address": "Bihar"
    },
    {
        "_id": 3,
        "Name": {"First": "Rutuja", "Last": "Dhamdhere"},
        "Gender": "Female",
        "Address": "Maharashtra"
    },
    {
        "_id": 4,
        "Name": {"First": "Mayuresh", "Last": "Jadhav"},
        "Gender": "Male",
        "Address": "Maharashtra"
    },
    {
        "_id": 5,
        "Name": {"First": "Akash", "Last": "Singh"},
        "Gender": "Male",
        "Address": "UP"
    },
    {
        "_id": 6,
        "Name": {"First": "Neha", "Last": "Lahane"},
        "Gender": "Female",
        "Address": "Maharashtra"
    }
    ]
x = mycol.insert_many(mylist)

print(myclient.list_database_names())
print(mydb.list_collection_names())

# print list of ids
print(x.inserted_ids)

