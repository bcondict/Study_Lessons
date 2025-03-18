# # object
x = 10
print(id(x))  # Identity
print(type(x))  # Type
print(x)  # Value


# # mutability
# Immutable (numbers, strings, tuples)
x = 10
x = x + 5  # New object is created, old one is discarded

# Mutable (lists, dictionaries, sets)
lst = [1, 2, 3]
lst.append(4)  # The same object is modified


# # reference
a = [1, 2, 3]  # 'a' refers to a list object in memory
b = a  # 'b' now refers to the same object

print("removed", a.pop(1))
print("b variable", b);


# # mutability
# Immutable object (int)
def modify_value(x):
    x = x + 1  # New object is created
    print("value changed", x)

num = 10
modify_value(num)
print("without chagnes", num)  # 10 (unchanged)

# Mutable object (list)
def modify_list(lst):
    lst.append(4)  # Modifying the original object
    print("list changed", lst)

my_list = [1, 2, 3]
modify_list(my_list)
print("list without changes", my_list)  # [1, 2, 3, 4] (changed)
