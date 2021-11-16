#include <iostream>
using namespace std;
int main()
{
    int arr1[2][3];
    int arr2[3][2];
    int arr3[2][2];
    for (int i = 0; i < 2; i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<i<<'X'<<j<<" ";
            cin>> arr1[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<i<<'X'<<j<<" ";
            cin>> arr2[i][j];
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr3[i][j]=arr1[i][0]*arr2[0][j]+arr1[i][1]*arr2[1][j]+arr1[i][2]*arr2[2][j];
        }
    }
    cout<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}