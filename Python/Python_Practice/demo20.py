# create a collection
import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]

# create collection
mycol = mydb["Customer"]

print(myclient.list_database_names())

print(mydb.list_collection_names())

coll = mydb.list_collection_names()
print(type(coll))
if "Customer" in coll:
    print("Customer collection exist.")
else:
    print("Customer collection not exist.")

