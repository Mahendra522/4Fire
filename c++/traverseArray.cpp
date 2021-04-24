// traversing the elements of an array in c++ Language.
#include <iostream>
using namespace std;
int main(){
    int array[30] = {0};
    int n=0;
    cout<<"Enter total elements you wanted to enter: ";
    cin>>n;
    cout<<"\n";
    cout<<"Please enter each element one by one:\n ";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    cout<<"You have successfully entered all the elements\n";
    cout<<"Elements entered are:\n";
    for(int i=0; i<n; i++){
        cout<<array[i]<<"\n";
    }
    cout<<"--------------Exiting-------------";
    
    
    return 0;
}