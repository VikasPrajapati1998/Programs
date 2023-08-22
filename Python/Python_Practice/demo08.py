# Python MongoDB Query
# Filter the Result
import pymongo as pm
myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["Students"]

myquery = {"Address": "Bihar"}

mydoc = mycol.find(myquery)

for x in mydoc:
    print(x)

