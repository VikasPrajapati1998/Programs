# Limit the Result
'''
To limit the result in MongoDB, we use the limit() method.
'''
import pymongo as pm
myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["demodb"]
mycol = mydb["customer"]
for k in mycol.find().limit(5):
    print(k)
print()
