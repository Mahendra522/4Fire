// C Program to find the repeated elements and their count.
#include<stdio.h>
int main(){
    int n=0;
    int array[30] = {0};
    printf("Enter number of elements you wanted to insert:  ");
    scanf("%d",&n);
    printf("\n");
    
    printf("Enter each element one by one:   \n");
    for (int i = 0; i < n; i++) {
        scanf("%d",&array[i]);
    }
    
    for(int i=0; i<n-1; i++){
        int count = 1;
        if(array[i] == 0) continue;
        for(int j=i+1; j<n;j++){
            if(array[i] == array[j]){
                count++;
                array[j] = 0;
            }
        }
        printf("%d is repeated %d times.\n",array[i],count);
    }
    return 0;
}