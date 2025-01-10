#include <iostream>
using namespace std;
int main() {

    int arr2d[4][4];
    cout<<"Enter the values to store in Array:"<<endl;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>arr2d[i][j];
        }
    }
    cout<<endl;
    cout<<"You entered following values in Array:"<<endl;
    for(int k=0; k<4; k++)
    {
        for(int l=0; l<4; l++)
        {
            cout<<arr2d[k][l]<<" , ";
        }
        cout<<endl;
    }

    return 0;
}
