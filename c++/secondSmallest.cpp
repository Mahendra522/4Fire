// C++ program to find the second smallest element in the array
#include<iostream>
using namespace std;
int main(){
    int n=0, min1=0, min2=0;
    int array[30] = {0};
    
    cout<<"Enter number of elements you wanted to insert:    ";
    cin>>n;
    cout<<"\n";
    
    cout<<"Enter each element one by one:   ";
    for (int i = 0; i < n; i++) {
        cin>>array[i];
    }
    
    min1 = array[0];
    min2 = array[1];
    
    if(min2 < min1){
        min1 = min1 + min2;
        min2 = min1 - min2;
        min1 = min1 - min2;
    }
    
    for(int i=2; i<n;i++){
        if(array[i]<min2){
            int temp = 0;
            temp = min2;
            min2 = array[i];
            array[i] = temp;
            if(min2 < min1){
                min1 = min1 + min2;
                min2 = min1 - min2;
                min1 = min1 - min2;
            }
        }
        
    }
    printf("The Secocnd Smallest element in the array is: %d\n",min2);
    
    return 0;
}