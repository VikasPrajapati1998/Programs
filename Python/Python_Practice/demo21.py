# Python MongoDB Insert Document
import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]  # database
mycol = mydb["Customers"]  # collection

mydict = {"name": "John", "address": "Highway 37", "roll no": 34}  # document
x = mycol.insert_one(mydict)

print(myclient.list_database_names())
print(mydb.list_collection_names())
# print id
print(x.inserted_id)

