/*22070123150 Experiment 9(b)*/
#include<iostream>
using namespace std;
int main()
{
    int marks[10]={69, 96, 24, 78, 35, 87, 56, 21, 41, 39};
    int key, i;
    cout<<"Enter a value to be searched: ";
    cin>>key;
    for(i=0;i<10;i++)
    {
        if(key == marks[i])
        {
            cout<<"The key exists in the array at "<<i+1<<"  position"<<endl;
            break;
        }
    }
    if(i==10)
    {
    cout<<"The key does not exist";
    }
    return 0;
}
