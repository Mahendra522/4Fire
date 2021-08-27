// C++ program to find all the Armstrong Numbers upto a given Number;

#include<iostream>
#include<math.h> //<math.h> header file can be used to find power, double pow(double x, double y); But we can use int datatype aswell.
using namespace std;

int main(){
    int n = 0;
    cout<<"Enter the number upto which you want to search the Armstrong Numbers: ";
    cin>>n;
    
    // 1. loop all the numbers from 153 to the last one.(As we know 153 is the smallesr Armstrong Number)
    // 2. Extract the digits from the Number. Do calculation.
    // 3. check sum == Number, if yes then it is a Armstrong Number else, increment the number.
    int tmp = 0;
    int count = 0, sum = 0;
    
    
    for (int i = 1; i < n; i++) {
        tmp = i;
        count = 0;
        sum = 0;
        
        int digits[10] = {0};
        
        while(tmp != 0){
            digits[count] = tmp%10;
            tmp = tmp / 10;
            count++;
        }
        
        for (int i = 0; i < count; i++) {
            sum = sum + pow(digits[i],count);
        }
        
        if(sum == i){
            cout<<i<<" ";
        }
        else{
            continue;
        }
    }
    
    return 0;
}
