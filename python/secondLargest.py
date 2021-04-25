#python program to find the second largest element in the array:
n,max1,max2 = 0,0,0
array = [0]*30
n = int(input("Enter the number of elements you wanted to insert:   "))
print("Enter each element one by one:   \n")
for i in range(n):
    array.insert(i,int(input()))

max1 = array[0]
max2 = array[1]

if max2 > max1:
    max1 = max1+max2
    max2 = max1 - max2
    max1 = max1 - max2

for i in range(2,n):
    if array[i] > max2:
        temp = 0
        temp = array[i]
        array[i] = max2
        max2 = temp
        if max2 > max1:
            max1 = max1+max2
            max2 = max1 - max2
            max1 = max1 - max2
            
print("The second largest element in the array is: ",max2,end="\n")