// Traversing means printing all the array elements one by one
#include <stdio.h>
int main(){
    int array[30] = {0};
    int n = 0;
    printf("How many numbers you wanted to insert in this array: ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter each number one by one.\n");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("You have successfully inserted all the elements in the array!");
    printf("Elements that you have entered is: ");
    for(int i=0; i<n; i++){
         printf("%d\n", array[i]);
    }
    printf("*----------------*Exiting*-----------------*");
    
    return 0;
}