# Python MongoDB Update
#  Update Collection

# update_many()
import pymongo as pm
myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["demodb"]
mycol = mydb["customer"]

myquerry = {"Address": {"$regex": "^A"}}
newvalues = {"$set": {"Name": "Minnie"}}
x = mycol.update_many(myquerry, newvalues)
print(x.modified_count, "documents updated.")

for k in mycol.find():
    print(k)
print()
