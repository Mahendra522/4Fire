#python program to find the repeated element of an array and its count.
n = 0
array = [0]*30
n = int(input("Enter number of elements you wanted to insert:   "))
print("Enter each element one by one:   ")
for i in range(n):
    array.insert(i,int(input()))

for i in range(n-1):
    count = 1
    if array[i]==0:
        continue
    for j in range(i+1,n):
        if array[i] == array[j]:
            count = count + 1
            array[j] = 0
    print(array[i]," is repeated ",count," times",end="\n");