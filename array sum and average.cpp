/*22070123150 Experiment 9(c)*/
#include<iostream>
using namespace std;
int main()
{
    int marks[10]=, i, sum = 0;
    float average;
    for(i=0;i<10;i++)
    {
        sum=marks[i]+sum;
    }
    average = sum/10;
    cout<<"The sum of all elements is: "<<sum<<endl;
    cout<<"The average of all elements is: "<<average<<endl;
    return 0;
}