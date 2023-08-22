# Advance Query

import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["Sellers"]

print("$gt = L ------------------------------------")
myquery = {"Address": {"$gt": "L"}}
mydoc = mycol.find(myquery)
for x in mydoc:
    print(x)
print()

# ------------------------------------------------------------------------------------
# Filter With Regular Expression
'''
Regular expressions can only be used to query strings.
To find only the documents where the "address" field starts with the letter "N", 
use the regular expression {"$regex": "^N"}:
'''
print("$regex = ^N --------------------------------")
myquery = {"Address": {"$regex": "^N"}}
mydoc = mycol.find(myquery)
for x in mydoc:
    print(x)
