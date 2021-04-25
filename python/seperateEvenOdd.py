# seperating the even and odd elements from an array using Python Programming Language
array = [0]*30
even_array = [0]*30
odd_array = [0]*30
even_count, odd_count, n = 0,0,0
n = int(input("Enter the number of elements you wanted to insert:   "))
print("Enter each element one by one:   ")
for i in range(n):
    array.insert(i,int(input()))
    
for i in range(n):
    if array[i]%2 == 0:
        even_array[even_count] = array[i]
        even_count = even_count + 1
    else:
        odd_array[odd_count] = array[i]
        odd_count = odd_count + 1
        
print("Even elements:   ")
for i in range(even_count):
    print(even_array[i],end=" ")
print("\n")
print("Odd elements:   ")
for i in range(odd_count):
    print(odd_array[i],end=" ")