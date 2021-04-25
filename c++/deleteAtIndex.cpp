// This is a C++ Language program to, Delete an element at a given index!

#include<iostream>
using namespace std;
int main(){
    int array[30] = {0};
    int n = 0, position = 0, index = 0;
    cout<<"Enter the Number of Elements you wants to insert:   ";
    cin>>n;
    cout<<"\n";
    
    cout<<"Enter each element one by one:  \n";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    
    cout<<"Enter the position of element to be deleted:    ";
    cin>>position;
    cout<<"\n";
    
    index = position - 1;
    
    for(int i = index; i<n; i++){
        array[i] = array[i+1];
    }
    
    cout<<"Element Deleted!";
    for(int i=0; i<n-1; i++){
        cout<<array[i]<<"   ";
    }
    
    return 0;
}