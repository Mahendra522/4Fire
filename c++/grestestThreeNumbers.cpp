// C++ program to print greater among 3 numbers.

#include <iostream>
using namespace std;

int main() {
    int n1 = 14;
    int n2 = 45;
    int n3 = 90;
    //In this program we have to find the greater among three numbers
    
    int result = 0;
    
    result = (n1>n2)?(n1>n3)?n1:n3:(n2>n3)?n2:n3;
    cout<<"Greatest among these three: "<<result<<endl;
	return 0;
}
