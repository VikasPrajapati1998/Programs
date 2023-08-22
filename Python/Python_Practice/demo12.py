# insert data
import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["demodb"]
mycol = mydb["customer"]

mylist = [
    {"_id": 1, "Name": "Aman Singh", "Gender": "Male", "Address": "Bihar"},
    {"_id": 2, "Name": "Arjun Prajapati", "Gender": "Male", "Address": "Ayodhya"},
    {"_id": 3, "Name": "Rohan Borse", "Gender": "Male", "Address": "Nashik"},
    {"_id": 4, "Name": "Kumar Sanu", "Gender": "Male", "Address": "Bihar"},
    {"_id": 5, "Name": "Neha Lahane", "Gender": "Female", "Address": "Latoor"},
    {"_id": 6, "Name": "Rutuja Dhamdhere", "Gender": "Female", "Address": "Pune"},
    {"_id": 7, "Name": "Akash Singh", "Gender": "Male", "Address": "Noida"},
    {"_id": 8, "Name": "Rishikesh Bachchhaw", "Gender": "Male", "Address": "Nashik"},
    {"_id": 9, "Name": "Khushboo Yadav", "Gender": "Female", "Address": "Bihar"},
    {"_id": 10, "Name": "Sudhanshu Mishra", "Gender": "Male", "Address": "Ayodhya"},
    {"_id": 11, "Name": "Madhvi Mishra", "Gender": "Female", "Address": "Prayagraj"},
    {"_id": 12, "Name": "Romi Rai", "Gender": "Female", "Address": "Ballia"},
    {"_id": 13, "Name": "Jyoti Sharma", "Gender": "Female", "Address": "Ayodhya"},
    {"_id": 14, "Name": "Vinish", "Gender": "Male", "Address": "Pune"},
    {"_id": 15, "Name": "Yashashvi", "Gender": "Female", "Address": "Maharashtra"},
    {"_id": 16, "Name": "Angha Patil", "Gender": "Female", "Address": "Maharashtra"},
    {"_id": 17, "Name": "Ayush Kumar", "Gender": "Male", "Address": "Maharashtra"},
    {"_id": 18, "Name": "Rashi Jaan", "Gender": "Female", "Address": "Chhatishgarh"},
    {"_id": 19, "Name": "Akash Singh", "Gender": "Male", "Address": "Ayodhya"},
    {"_id": 20, "Name": "Ajit Kumar", "Gender": "Male", "Address": "Ayodhya"}
]

mycol.insert_many(mylist)


for x in mycol.find():
    print(x)

