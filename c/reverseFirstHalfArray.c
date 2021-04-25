// C program to reverse only the first half of Array.
#include<stdio.h>
int main(){
    int array[30] = {0};
    int n=0, first_mid = 0, mid = 0;
    printf("Enter number of elements you wanted to insert:  ");
    scanf("%d",&n);
    printf("\n");
    
    mid = n / 2;
    first_mid = n / 4;
    
    printf("Enter each element one by one:  ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    
    for(int i=0; i<first_mid; i++){
        int temp = 0;
        temp = array[i];
        array[i] = array[mid-i-1];
        array[mid-i-1] = temp;
    }
    
    printf("All the elements are reversed:  ");
    for(int i=0; i<n; i++){
        printf("%d  ",array[i]);
    }
    
    
    
    return 0;
    
}