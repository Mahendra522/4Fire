//Inserting an element at a given index in C language
#include <stdio.h>
int main(){
    int n = 0;
    int array[30] = {0};
    int position = 0, index = 0, value =0;
    printf("Enter the Number of element you wanted to insert: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
            scanf("%d",&array[i]);
    }

    printf("Enter the position at which you have to insert the element\n");
    scanf("%d",&position);
    index = position - 1;
    printf("Enter the value at that index: ");
    scanf("%d",&value);
    for(int i=n-1; i>=index; i--){
        array[i+1] = array[i];
    }
    array[index] = value;
    printf("Value %d has been inserted successfully at position %d.\n ",value,index+1);
    printf("List of all elements: \n");
    for(int i=0;i<n+1; i++){
        printf("%d\n",array[i]);
    }
    return 0;
}