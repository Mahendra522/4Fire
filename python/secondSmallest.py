#python program to find the second smallest element in the array
n, min1, min2 = 0,0,0
array = [0]*30

n = int(input("Enter the number of element you wanted to insert:    "))
for i in range(n):
    array[i] = int(input())

min1 = array[0]
min2 = array[1]

if min2 < min1: #swapping
    min1 = min1 + min2
    min2 = min1 - min2
    min1 = min1 - min2
    

for i in range(2,n):
    if array[i] < min2:
        temp = 0
        temp = min2
        min2 = array[i]
        array[i] = temp
        if min2 < min1:
            min1 = min1 + min2
            min2 = min1 - min2
            min1 = min1 - min2

print("The 2nd Smallest number in the array is: ",min2,end="\n")