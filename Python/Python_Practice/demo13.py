# Python MongoDB Delete Document
'''
To delete one document, we use the delete_one() method.
The first parameter of the delete_one() method is a query object defining which document to delete.
Note: If the query finds more than one document, only the first occurrence is deleted.
'''

import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/")
print(myclient.list_database_names())

mydb = myclient["demodb"]
print(mydb.list_collection_names())

mycol = mydb["customer"]
print()

# -------------------------------------------------------
for x in mycol.find():
    print(x)
print()

# -------------------------------------------------------
# Delete one document
print("Delete one document ----------------------------->")
myquery = {"Name": "Ayush Kumar"}
mycol.delete_one(myquery)
for k in mycol.find():
    print(k)
print()

# -------------------------------------------------------
# Delete many documents
print("Delete many documents --------------------------->")
myquery = {"Address": {"$regex": "^N"}}
x = mycol.delete_many(myquery)
print(x.deleted_count, "document deleted.")
for k in mycol.find():
    print(k)
print()


