//c++ program to find all the prime numbers between any 2 given Natural Numbers.
#include<iostream>
using namespace std;

// A number is said to be a Prime Number, if it is only divisible by 1 and the number itself.

struct Numbers{
    void primeBetween(int n1, int n2){
        for (int i = n1; i < n2; i++) {
            int flag = 0;
            for (int j = 2; j < n1; j++) {
                if(i%j == 0){
                    flag=1;
                    break;
                }
            }
            if(flag == 1){
                continue;
            }
            else{
                cout<<i<<" ";
            }
        }
    }
};


int main(){
    struct Numbers prime;
    int n1 = 23;
    int n2 = 99;
    prime.primeBetween(n1,n2);
    return 0;
}
