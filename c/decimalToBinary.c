// C Program to convert a decimal number to a binary number
#include<stdio.h>
int main(){
    int decimal = 0;
    int binary_array[30] = {0};
    int temp = 0, i = 0;
    
    printf("Enter the decimal number:   ");
    scanf("%d",&decimal);
    temp = decimal;
    printf("The Binary equivalent of this Decimal number is:    ");
    while(temp!=0){
        if(temp % 2 == 0){
            binary_array[i] = 0;
            i++;
            temp = temp / 2;
        }
        else{
            binary_array[i] = 1;
            i++;
            temp = temp / 2;
        }
    }
    for (int j = i-1; j >= 0; j--) {
        printf("%d ",binary_array[j]);
    }
    
    return 0;
}