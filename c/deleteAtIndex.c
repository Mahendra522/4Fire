// This is a C Language program to, Delete an element at a given index!

#include<stdio.h>
int main(){
    int array[30] = {0};
    int n = 0, position = 0, index = 0;
    printf("Enter the Number of Elements you wants to insert:   ");
    scanf("%d",&n);
    printf("\n");
    
    printf("Enter each element one by one:  \n");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    
    printf("Enter the position of element to be deleted:    ");
    scanf("%d",&position);
    printf("\n");
    
    index = position - 1;
    
    for(int i = index; i<n; i++){
        array[i] = array[i+1];
    }
    
    printf("Element Deleted!");
    for(int i=0; i<n-1; i++){
        printf("%d      ", array[i]);
    }
    
    return 0;
}