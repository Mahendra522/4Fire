// C Language Program to print elements of Array in reverse order.
#include<stdio.h>
int main(){
    int array[30] = {0};
    int n = 0;
    printf("Enter number of elements you wanted to insert:  ");
    scanf("%d",&n);
    printf("\n");
    
    printf("Enter each element one by one:  ");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("Output: \n");
    for(int i=n-1; i>=0; i--){
        printf("%d  ",array[i]);
    }
    
    
    return 0;
    
}