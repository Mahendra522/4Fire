#include <iostream>
using namespace std;

int main() {
	int lcm = 1;
	int n = 5;
	cout<<"Enter total count of numbers whoose lcm you wants to calculate: ";
	cin>>n;
	
	int numbers[10] = {0};
	cout<<"Enter each number one by one:";
	for (int i = 0; i < n; i++) {
	    cin>>numbers[i];
	}
	
	for (int i = 0; i < n; i++) {
	    if(lcm%numbers[i] ==0){
	        continue;
	    }
	    else{
	        i = -1;
	        lcm++;
	    }
	}
	cout<<"lcm is: "<<lcm<<endl;
	return 0;
}
