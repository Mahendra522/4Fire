// Program for Reversing the elements of Array in C Language
#include<stdio.h>
int main(){
    int array[30] = {0};
    int n = 0, mid = 0;
    printf("Enter Number of elements you wanted to insert:  ");
    scanf("%d",&n);
    printf("\n");
    
    mid = n / 2;
    printf("Enter each element one by one:  \n");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    
    for(int i=0; i<mid; i++){
        int temp =0;
        temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    }
    
    printf("All the elements in the array are reversed:     ");
    for(int i=0; i<n; i++){
        printf("%d  ",array[i]);
    }
    
    printf("\n");

    return 0;
}