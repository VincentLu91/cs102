// - Author:  Charles Lively - Saylor Foundation
#include <iostream>
using namespace std;
int main()
{
  int Array[5];

	cout<<"This Program will provide you with an illustration of how an array can be used"<<endl;

	cout<<"We will start with 0 and increment the array up to 5 places"<<endl;

	cout<<"The value in each position of the array = array position * 2"<<endl;
	for (int count = 0; count < 5; count++)
	{
		Array[count]=count*2;
		cout << Array[count] << endl;
	}
	return 0;
}
