// C program to find the second largest element in the array
#include<stdio.h>
int main(){
    int array[30] = {0};
    int n = 0, max1 = 0, max2 = 0;
    printf("Enter the number of elements you wanted to insert:   ");
    scanf("%d",&n);
    printf("\n");
    
    printf("Enter each element one by one: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&array[i]);
    }
    
    max1 = array[0];
    max2 = array[1];
    if(max2 > max1){
        max1 = max1+max2;
        max2 = max1 - max2;
        max1 = max1-max2;
    }
    for(int i=2; i<n; i++){
        if(array[i]>max2){
            int temp = 0;
            temp = max2;
            max2 = array[i];
            array[i] = temp;
            if(max2 > max1){
                max1 = max1+max2;
                max2 = max1 - max2;
                max1 = max1-max2;
            }
        }
    }
    printf("The second Largest element in the array is: %d",max2);
    
    return 0;
}