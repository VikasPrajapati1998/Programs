# Global namespace
global_var = "I am in the global namespace"

def outer_function():
    # Enclosing namespace (for inner_function)
    outer_var = "I am in the enclosing namespace"
    
    def inner_function():
        # Local namespace
        local_var = "I am in the local namespace"
        print(f"Inside inner_function: {local_var}")  # Local namespace
        print(f"Accessing outer_var: {outer_var}")   # Enclosing namespace
        print(f"Accessing global_var: {global_var}") # Global namespace
    
    inner_function()
    print(f"Inside outer_function: {outer_var}")     # Enclosing namespace
    # print(local_var)  # This would raise an error as local_var is not in this scope

# Call the outer function
outer_function()

# Accessing global variable
print(f"Outside function: {global_var}")

# Using a built-in namespace function
print(f"Using built-in namespace: {len(global_var)}")  # len() is from built-in namespace

# Demonstrating namespace conflict resolution
x = "global x"

def test_namespace():
    x = "local x"  # Local namespace shadows global x
    print(f"Inside test_namespace: {x}")

test_namespace()
print(f"Outside test_namespace: {x}")