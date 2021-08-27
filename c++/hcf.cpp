// C++ program to calculate the hcf of multiple Numbers.
// HCF refers to Highhest common multiplier, means it is the highest numbers which divides all the given
// numbers.

// HCF is the Greatest Number always less than or equals to the largest of all numbers, which divides all the given Numbers.
#include<iostream>
using namespace std;

int main(){
    int hcf = 0;
    int n = 0;
    int numbers[10] = {0};
    cout<<"Enter count of numbers of which you wanted to find HCF: ";
    cin>>n;
    
    cout<<"Enter each number one by one: \n";
    for (int i = 0; i < n; i++) {
        cin>>numbers[i];
    }
    // Now we have to calculate maximum from the list of Numbers.
    int min = numbers[0];
    for (int i = 1; i < n; i++) {
        if(min > numbers[i]){
            int temp = 0;
            temp = min;
            min = numbers[i];
            numbers[i] = temp;
        }
    }
    hcf = min;
    
    for (int i = 0; i < n; i++) {
        if(hcf != 1){
            if(numbers[i]%hcf == 0){
                continue;
            }
            else{
                i = -1;
                hcf--;
            }
        }
    }
    
    cout<<"HCF of above given numbers is: "<<hcf<<endl;
    return 0;
}
