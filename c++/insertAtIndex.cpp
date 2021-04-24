// Inserting element at a particular index in C++ Language
#include <iostream>
using namespace std;
int main(){
    int n=0, position =0, index=0, value=0;
    int array[30] = {0};
    cout<<"Enter the number of elements you wanted to insert: ";
    scanf("%d",&n);
    cout<<"\n";
    cout<<"Enter each element one by one: \n";
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    cout<<"Enter the position at which you have to insert the element: ";
    cin>> position;
    cout<<"\n";
    index = position - 1;
    
    cout<<"Enter the value you wanted to insert: ";
    cin>>value;
    cout<<"\n";
    
    
    for(int i=n-1; i>=index; i--){
        array[i+1] = array[i];
    }
    array[index] = value;
    cout<<"Value inserted successfully!\n";
    cout<<"List of all elements in the array:\n";
    for(int i=0; i<n+1; i++){
        printf("%d\n", array[i]);
    }
    
    return 0;
}