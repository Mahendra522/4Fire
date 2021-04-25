# Reversing first half elements of array using Pyhton Programming Language
array=[0]*30
n,mid,first_mid = 0,0,0

n = int(input("Enter number of elements you wanted to insert:   "))
print("Enter each element one by one:   ")
for i in range(n):
    array[i] = int(input())
    
mid = int(n / 2)
first_mid = int(n / 4)

for i in range(first_mid):
    temp = 0
    temp = array[i]
    array[i] = array[mid-i-1]
    array[mid-i-1] = temp
    
print("First Half elements are reversed:    ", end="\n")
for i in range(n):
    print(array[i], end=" ")
