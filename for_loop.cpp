// - Author:  Charles Lively - Saylor Foundation
#include <iostream>
using namespace std;
int main()
{
  cout<<"This Program will provide you with an illustration of how for-loops can be used"<<endl;

	cout<<"We will start with 0 and print out all even numbers until 10"<<endl;
	for (int count = 0; count <= 10; count += 2)
	{
		cout << count << ", ";
	}
	cout << endl;
	return 0;
}
