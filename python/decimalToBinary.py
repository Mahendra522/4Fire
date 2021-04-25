# Decimal to Binary conversion in Python Programing
decimal,i,temp = 0,0,0
binary_array = [0]*30
decimal = int(input("Enter the decimal number:    "))
temp = decimal

while temp!=0:
    if temp%2 == 0:
        binary_array.insert(i,0)
        i=i+1
        temp = int(temp / 2)
    else:
        binary_array.insert(i,1)
        i=i+1
        temp = int(temp / 2)


print("Binary Number:   ")
for x in reversed(range(i)):
    print(binary_array[x], end=" ")
    
