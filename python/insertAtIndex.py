# Inserting element at a particular index program written in Python Language
n = 0;
array=[0]*30
position = 0
index = 0
value =0
n =int(input("Enter Number of elements to be entered: "))
print("\n")

print("Enter each element one by one:")
print("\n")

for i in range(n):
    array.insert(i,input())
position = int(input("Enter the position at which you have to insert the element: "))
print("\n")
index = position - 1
value = int(input("Enter the value to be inserted: "))

for i in reversed(range(index,n+1)):
    array[i+1] = array [i]

array[index] = value;

print("Value entered successfully!")
print("List of all elements is: \n")
if position < n:
    for i in range(n+1):
        print(array[i],end="\n")
else:
    for i in range(position):
        print(array[i],end="\n")


