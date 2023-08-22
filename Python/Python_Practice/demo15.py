# Python MongoDB Update
#  Update Collection

# update_one()
import pymongo as pm
myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["demodb"]
mycol = mydb["customer"]

myquerry = {"Address": "Maharashtra"}
newvalues = {"$set": {"Address": "Nashik"}}
mycol.update_one(myquerry, newvalues)

for k in mycol.find():
    print(k)


