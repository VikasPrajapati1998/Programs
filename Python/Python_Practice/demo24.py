# find()
import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/")  # mongodb client
mydb = myclient["mydatabase"]  # database
mycol = mydb["Students"]   # collections

for x in mycol.find():
    print(x)

print()
for x in mycol.find({}, {"_id": 0, "Name": 1, "Address": 1}):
    print(x)
