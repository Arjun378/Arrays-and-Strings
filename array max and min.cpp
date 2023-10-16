/*22070123150-max min*/
#include <iostream>
using namespace std;
int main()
{
	int marks[10] = {69, 96, 24, 78, 35, 87, 56, 21, 35, 39}, i, max=marks[0], min=marks[0];
	for (int i = 0; i < 10; i++)
    {
        if(max > marks[i])
        {
            max = marks[i];
        }
        if(min < marks[i])
        {
            min = marks[i];
        }
    }
	cout<<"Max element is: "<<max<<endl;
    cout<<"Min element is: "<<min<<endl;
	return 0;
}
