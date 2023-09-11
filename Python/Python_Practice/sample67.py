# Define a sample data structure (a dictionary)
data = {
    "name": "John",
    "age": 30,
    "city": "New York"
}

# Calculate the hash value for the data dictionary
data_hash = hash(frozenset(data.items()))  # Using frozenset to make the dictionary hashable

# Print the hash value
print("Hash value:", data_hash)

# You can use the hash value as a key in a dictionary
hash_dict = {
    data_hash: data
}

# Access data using the hash value
retrieved_data = hash_dict[data_hash]

# Print the retrieved data
print("Retrieved data:", retrieved_data)
