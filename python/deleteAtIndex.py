# Program to delete an element in the Array in Python Programming Language
array = [0]*30
index, position, value = 0, 0, 0

n = int(input("Enter the number of elements you wanted to insert:   "))
print("\n")

print("Enter each element one by one:   ")
print("\n")
for i in range(n):
    array[i] = int(input())

position = int(input("Enter position of element to be deleted:  "))
print("\n")

index = position - 1

for i in range(index,n+1):
    array[i] = array[i+1]

print("Element Deleted successfully!\n")
print("List of all the elements:    \n")
for i in range(n-1):
    print(array[i],end="\n")
    


