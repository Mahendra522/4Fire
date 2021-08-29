// c++profram to calculate the prime factors of the given number.
#include <iostream>
using namespace std;

int main() {
	int number = 90;
	int temp = 0;
	int product = 1;
	temp = number;
	cout<<"Prime Factors are: ";
	for (int i = 2; i <= temp; i++) {
	    if(temp%i == 0){
	        //Now you got the smallest number that divides the 'number' perfectly.
	        //Next thing is to check if it a prime number or not.
	        if(i == 2){
	            //prime number
	            cout<<i<<" ";
	            product *= i;
	            temp = temp / i;
	            i = 1;
	        }
	        else{
	            //check for prime number
	            int flag = 0;
	            for (int j = 2; j < i; j++) {
	                if(i%j == 0){
	                    //Not a prime Number.
	                    flag = 1;
	                    break;
	                }
	            }
	            if(flag == 0){
	                //Yes it is a prime Number(i).
	                product *= i;
	                cout<<i<<" ";
	                temp = temp / i;
	                i = 1; 
	                //this is done to make sure that every time the loop starts from the beginning
	                //after next iteration the value of 'i' will automatically be incremented to 2.
	            }
	        }
	        
	    }
	    
	}
	cout<<"and product is: "<<product;
	return 0;
}
