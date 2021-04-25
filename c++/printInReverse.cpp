// C++ Language Program to print elements of Array in reverse order.
#include<iostream>
using namespace std;
int main(){
    int array[30] = {0};
    int n = 0;
    cout<<"Enter number of elements you wanted to insert:  ";
    cin>>n;
    cout<<"\n";
    
    cout<<"Enter each element one by one:  ";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<"\n";
    
    
    cout<<"Output: \n";
    for(int i=n-1; i>=0; i--){
        cout<<array[i]<<"\n";
    }
    
    
    return 0;
    
}