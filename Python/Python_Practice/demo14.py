# Python MongodDB Drop Collection
# Delete Collection
'''
You can delete a table, or collection as it is called in MongoDB, by using the drop() method.
'''
import pymongo as pm
myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
print(mydb.list_collection_names())

# create collection
mydb.create_collection("Teachers")
print(mydb.list_collection_names())

# drop collection
mydb.drop_collection("Teachers")
print(mydb.list_collection_names())

# drop collection
mydb.create_collection("Consumer")
print(mydb.list_collection_names())
mycol = mydb["Consumer"]
mycol.drop()
print(mydb.list_collection_names())

'''
The drop() method returns true if the collection was dropped successfully,
and false if the collection does not exist.
'''
