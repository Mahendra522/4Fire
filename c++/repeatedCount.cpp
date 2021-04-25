// C++ Program to find the repeated elements and their count.
#include<iostream>
using namespace std;
int main(){
    int n=0;
    int array[30] = {0};
    cout<<"Enter number of elements you wanted to insert:  ";
    cin>>n;
    cout<<"\n";
    
    cout<<"Enter each element one by one:   \n";
    for (int i = 0; i < n; i++) {
        cin>>array[i];
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
        cout<<array[i]<<" is repeated "<<count<<" times."<<endl;
    }
    
    
    
    
    return 0;
}