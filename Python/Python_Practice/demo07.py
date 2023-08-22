# find()
import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["Students"]

for x in mycol.find({}, {"Name": 1}):
    print(x)

