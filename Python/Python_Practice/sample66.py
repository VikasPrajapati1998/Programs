import json


d = {'Alpha': 123, 2: 'Beta', 5.6: 'Charli', 'list1': [1, 2, 3, 4, 5], 'set1': {2, 3, 4}, (2, 4, 6): 3, b'4C7': 56}

print(d)

# Create a Python dictionary
data = {
    "name": "John",
    "age": 30,
    "city": "New York",
    5: 'Arjun',
    7.34: 'Moose'
}

# Serialize the dictionary to a JSON-formatted string
json_data = json.dumps(data)

# Print the JSON object
print(json_data)
