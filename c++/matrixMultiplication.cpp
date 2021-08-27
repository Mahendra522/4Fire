// C++ Program to Multply two Matrix.
// Task: To get the input from the external user through command prompt.

#include<iostream>
using namespace std;

class MatrixOperations{
    public:
    void matrixMultiplication(){
        int row1 = 0, col1 = 0; // rows and column of 1st Matrix
        int row2 = 0, col2 = 0; // rows and column of 2nd Matrix
        
        cout<<"Enter Number of Rows in 1st Matrix: ";
        cin>>row1;
        cout<<"\n";
        cout<<"Enter Number of Columns in 1st Matrix: ";
        cin>>col1;
        cout<<"\n*********************\n";
        
        cout<<"Enter Number of Rows in 2nd Matrix: ";
        cin>>row2;
        cout<<"\n";
        cout<<"Enter Number of Columns in 2nd Matrix: ";
        cin>>col2;
        cout<<"*********************\n";
        
        int a[row1][col1] = {0};
        int b[row2][col2] = {0};
        int c[row1][col2] = {0};
        
        
        
        cout<<"Enter the values of 1st Matrix:"<<endl;
        for (int i = 0; i < row1; i++) {    //
            for (int j = 0; j < col1; j++) {
                cin>>a[i][j];
            }
        }
        
        cout<<"Enter the values of 2nd Matrix:"<<endl;
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                cin>>b[i][j];
            }
        }
        
        cout<<"Data Entered Successfully!"<<endl;
        
        cout<<"Data of 1st Matrix:"<<endl;
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col1; j++) {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        
        cout<<"Data of 2nd Matrix:"<<endl;
        for (int i = 0; i < row2; i++) {
            for (int j = 0; j < col2; j++) {
                cout<<b[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        int sum = 0;
        
        for (int i = 0; i < row1; i++) {
            int k = 0;
            while(k<row1){
                sum = 0;
                for (int j = 0; j < row2; j++) {
                    sum = sum + a[i][j]*b[j][k];
                }
                c[i][k] = sum;
                k++;
            }
        }
        for (int i = 0; i < row1; i++) {
            for (int j = 0; j < col2; j++) {
                cout<<c[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};
int main(){
    MatrixOperations* mo = new MatrixOperations();
    mo->matrixMultiplication();
    
    return 0;
}
