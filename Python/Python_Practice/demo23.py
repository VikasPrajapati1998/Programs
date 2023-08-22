# find(), find_one(), find_many()
import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/") # mongodb client
mydb = myclient["mydatabase"]   # database
mycol = mydb["Students"]  # collections
x = mycol.find_one()  # read one document
print(x)
