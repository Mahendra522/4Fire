// Separate even and odd numbers in an Array using C language
#include <stdio.h>
int main(){
    int array[30] = {0};
    int n = 0;
    int even_array[30] = {0};
    int odd_array[30] = {0};
    int even_count = 0, odd_count = 0;
    printf("Enter the number of elements you wanted to insert:  ");
    scanf("%d",&n);
    printf("\n");
    
    printf("Enter each number one by one:   \n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&array[i]);
    }
    
    for(int i=0; i<n;i++){
        if(array[i] % 2 == 0){
           even_array[even_count] = array[i];
           even_count++;
        }
        else{
            odd_array[odd_count] = array[i];
            odd_count++;
        }
    }
    printf("Even Number List:   ");
    for(int i=0; i<even_count; i++){
        printf("%d ",even_array[i]);
    }
    printf("\n");
    
    printf("Odd Number List:   ");
    for(int i=0; i<odd_count; i++){
        printf("%d ",odd_array[i]);
    }
    printf("\n");
    
    
    return 0;
}