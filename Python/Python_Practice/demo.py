# insert data in collection
import pymongo as pm
myclient = pm.MongoClient("mongodb://localhost:27017/")
print(myclient.list_database_names())
mydb = myclient["sanu"]
print(mydb.list_collection_names())
mycol = mydb["employees"]

for k in mycol.find({"Name": {"First": "Rajan", "Last": "Gangwar"}}):
    print(k)
print()

