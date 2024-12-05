#include <iostream>
using namespace std;
int main() {

    int arr[3][3];
    int count=0;

    cout<<"Enter the numbers to fill the Array:"<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
            count=count+arr[i][j];
        }
    }
    cout<<endl;
    cout<<"The Sum of all the values of Array is: "<<count;

    return 0;
}