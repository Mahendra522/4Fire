// Decimal to Binary conversion Program written in C++ Language
#include<iostream>
using namespace std;
int main(){
    int decimal = 0, temp = 0, i = 0;
    int binary_array[30] = {0};
    
    cout<<"Enter the Decimal Value:    ";
    cin>>decimal;
    cout<<"\n";
    temp = decimal;
    
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
    cout<<"Binary Number: ";
    for (int j = i-1; j >=0; j--) {
        cout<<binary_array[j];
    }
    return 0;
}