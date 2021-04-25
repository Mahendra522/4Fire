// Separate even and odd numbers in an Array using C++ language
#include <iostream>
using namespace std;
int main(){
    int array[30] = {0};
    int n = 0;
    int even_array[30] = {0};
    int odd_array[30] = {0};
    int even_count = 0, odd_count = 0;
    cout<<"Enter the number of elements you wanted to insert:  ";
    cin>>n;
    cout<<"\n";
    
    cout<<"Enter each number one by one:   \n";
    for (int i = 0; i < n; i++) {
        cin>>array[i];
    }
    
    for(int i=0; i<n;i++){
        if(array[i] % 2 == 0){
           even_array[even_count] = array[i];
           even_count++;
        }
        else{
            odd_array[odd_count] = array[i];
            odd_count++;
        }
    }
    cout<<"Even Number List:   ";
    for(int i=0; i<even_count; i++){
        cout<<even_array[i]<<" ";
    }
    cout<<"\n";
    
    printf("Odd Number List:   ");
    for(int i=0; i<odd_count; i++){
        cout<<odd_array[i]<<" ";
    }
    cout<<"\n";
    
    
    return 0;
}