// C++ program to calculate, weather a given number is prime or not.
// Prime Numbers: Numbers divisible by 1 and itself.

#include<iostream>
using namespace std;

class Numbers{
    public:
    
    string checkPrime(int n){ 
        //string is a special data type only available inn c++ and not c.
        //remember string is written complete lower case in c++ --> string.
        //but in java it is written like, java --> String, because in java it is a class so 1st letter is capital.
    
        int flag = 0;
        string primeMsg = "Prime Number";
        string nonPrimeMsg = "Non-Prime Number";
        
        for (int i = 2; i < n; i++) {
            if(n%i == 0){
                flag = 1;
                return nonPrimeMsg;
                break;
            }
        }
        if(flag == 0){
            return primeMsg;
        }
    }
};

int main(){
    int n = 11;
    string result = "";
    Numbers* num = new Numbers();
    result = num -> checkPrime(n);
    cout<<result;
    return 0;
}
