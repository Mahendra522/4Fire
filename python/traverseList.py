#Traversing all the elements in List, using Python Progrmming Language
myList = []
n = 0
n = int(input("Enter number of elements you wanted to insert in this List: "))
print("\n")
print("Enter each element one by one: \n")
for i in range(n):
    myList.insert(i,input())
print("Elements entered successfully!\n")
print("Elements entered:\n")
for i in range(n):
    print(myList[i])
print("-----------Exiting-----------")
   
