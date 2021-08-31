// C++ program for star Pattern.
// here n = 5, thus total characters in each line is 2n-1, => 9.

// 1111*1111 // 1st Line: * -->1, 1--> 9-1 = 8
// 111*1*111 // 2nd Line: * -->2, 1--> 9-2 = 7
// 11*1*1*11 // 3rd Line: * -->3, 1--> 9-3 = 6
// 1*1*1*1*1 // nth Line: * -->n, 1--> 9-n
// *1*1*1*1*
// After successfully inmplementing the above pattern you can replace the 1's with the ' '(blank) character.
#include<iostream>
#include <cmath>

using namespace std;

void spacePart(int m){
    for (int j = 1; j <=  m; j++) {
        cout<<" ";
    }
}

void thirdPart(int k){
    int count = 0;
    while(count != k){
        if(count < k){
            cout<<"*";
            count++;
        }
        if(count<k){
            cout<<" ";
            count++;
        }
    }
}

int main(){
    int n=14;
    int m = n-1; 
    int k = 1;
    for (int i = 1; i <= n && k <= 2*n-1; i++){ 
        
        if(m>=0){
            spacePart(m);
            thirdPart(k);
            spacePart(m);    
        }
        m--;
        k+=2;
        cout<<endl;
    }    
    return 0;
}
