/*22070123150 Experiment - transpose*/
#include<iostream>
using namespace std;
int main()
{
    int m, n, i, j;
    int mat1[m][n];
    cout<<"Enter no. of rows: ";
    cin>>m;
    cout<<"Enter no. of columns: ";
    cin>>n;
    cout<<"Enter Elements of Matrix: ";
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout << "Transpose of Matrix : \n ";
    for (i = 0; i<m;i++) 
    {
        cout<<endl;
        for(j = 0; j<n; j++)
        {
            cout<<" "<<mat1[j][i];
        }
    } 
    return 0;
}