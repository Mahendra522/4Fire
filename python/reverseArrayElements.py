# Revesing all the elements of List in Python Language
array = [0]*30
n, mid = 0,0

n = int(input("Enter Number of elements you wanted to insert:   "));
mid = int(n / 2)
print("Enter each element one by one:   ")

for i in range(n):
    array[i] = int(input())
    
for i in range(mid):
    temp = 0
    temp = array[i]
    array[i] = array[n-i-1]
    array[n-i-1] = temp
    
print("All the elements are reversed:   ")
for i in range(n):
    print(array[i],end="  ")
    

    