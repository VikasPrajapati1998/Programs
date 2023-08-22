# Python MongoDB Sort
'''
Use the sort() method to sort the result in ascending or descending order
The sort() method takes one parameter for "fieldname" and one parameter for "direction"
(ascending is the default direction)
'''
import pymongo as pm
myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["Sellers"]

print("Sort(name) : ascending ------------------------------------")
mydoc = mycol.find().sort("Owner")
for x in mydoc:
    print(x)
print()

print("Sort(name, 1) : ascending --------------------------------")
mydoc = mycol.find().sort("Address", 1)
for x in mydoc:
    print(x)
print()

print("Sort(name, -1) : descending ------------------------------")
mydoc = mycol.find().sort("Shop type", -1)
for x in mydoc:
    print(x)

