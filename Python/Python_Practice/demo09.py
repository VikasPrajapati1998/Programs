# Advanced Query
import pymongo as pm

myclient = pm.MongoClient("mongodb://localhost:27017/")
mydb = myclient["mydatabase"]
mycol = mydb["Sellers"]

mylist = [
    {
        "_id": 1,
        "Shop id": "7DP47",
        "Shop type": "Convenience Store",
        "Owner": "Ram Karan",
        "Address": "Bengaluru"
    },
    {
        "_id": 2,
        "Shop id": "9R47T",
        "Shop type": "Chain of Stores",
        "Owner": "Suresh Mishra",
        "Address": "Hyderabad"
    },
    {
        "_id": 3,
        "Shop id": "5C67J",
        "Shop type": "Specialty Store",
        "Owner": "Manish Yadav",
        "Address": "Noida"
    },
    {
        "_id": 4,
        "Shop id": "9B54F",
        "Shop type": "Departmental Stores",
        "Owner": "Mayank Dube",
        "Address": "Pune"
    },
    {
        "_id": 5,
        "Shop id": "8P90W",
        "Shop type": "Super Market",
        "Owner": "Ayush Pandey",
        "Address": "Lucknow"
    },
    {
        "_id": 6,
        "Shop id": "23UT7",
        "Shop type": "Hypermarket",
        "Owner": "Aman Singh",
        "Address": "Kanpur"
    },
    {
        "_id": 7,
        "Shop id": "67U45",
        "Shop type": "Shopping Malls",
        "Owner": "Payal Mittal",
        "Address": "Nagpur"
    },
    {
        "_id": 8,
        "Shop id": "8TY45",
        "Shop type": "Discount Store",
        "Owner": "Rohan Borse",
        "Address": "Nashik"
    },
    {
        "_id": 9,
        "Shop id": "12T56",
        "Shop type": "Cake Shop",
        "Owner": "Sanu Roi",
        "Address": "Patna"
    },
    {
        "_id": 10,
        "Shop id": "8A4B7",
        "Shop type": "Book Store",
        "Owner": "Arjun Prajapati",
        "Address": "Prayagraj"
    }
]

x = mycol.insert_many(mylist)
print(x.inserted_ids)


