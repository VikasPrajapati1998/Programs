# # ==========================================
# def my_generator(lst):
#     index = 0
#     while index < len(lst):
#         yield lst[index]
#         index += 1

# lst = [1, 2, 3, 4, 5, 6]
# gen = my_generator(lst)
# print(list(gen)) 
# # ==========================================

# ==========================================
def add_natural_numbers(n):
    total = 0
    current = 1
    while current <= n:
        total = total + current
        current = current + 1
    return total


n = 100000000000
result = add_natural_numbers(n)
print(result)
# ==========================================

# # ==========================================
# def natural_numbers(limit):
#     n = 1
#     while n <= limit:
#         yield n
#         n += 1

# # Now sum them manually (without built-in sum)
# total = 0
# for num in natural_numbers(100000000):
#     total += num

# print(total)
# # ===========================================
