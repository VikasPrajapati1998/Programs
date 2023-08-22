# create connection and database

import pymongo as pm

# mongodb client
myclient = pm.MongoClient("mongodb://localhost:27017/")
# mongodb database
mydb = myclient["mydatabase"]
print(myclient.list_database_names())

db = myclient.list_database_names()
print(type(db))
if "mydatabase" in db:
    print("mydatabase exist.")
else:
    print("mydatabase not exist.")

