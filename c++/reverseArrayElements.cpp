// Program for Reversing the elements of Array in C++ Language
#include<iostream>
using namespace std;
int main(){
    int array[30] = {0};
    int n = 0, mid = 0;
    cout<<"Enter Number of elements you wanted to insert:  ";
    cin>>n;
    cout<<"\n";
    
    mid = n / 2;
    cout<<"Enter each element one by one:  \n";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    
    for(int i=0; i<mid; i++){
        int temp =0;
        temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    }
    
    cout<<"All the elements in the array are reversed:     ";
    for(int i=0; i<n; i++){
        cout<<array[i]<<"   ";
    }
    
    cout<<"\n";

    return 0;
}