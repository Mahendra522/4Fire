# Python program to print elements in the Reverse order
array = [0]*30
n = 0
n = int(input("Enter number of elements you wanted to insert:   "))
print("\n")
print("Enter each number one by one:    \n")

for i in range(n):
    array[i] = int(input())

print("Printing Elements in the reverse order:  \n")
for i in reversed(range(n)):
    print(array[i],end="\n")
    
