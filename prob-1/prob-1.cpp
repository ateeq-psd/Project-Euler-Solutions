#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*Problem Statement : Find the sum of all the multiples of 3 or 5 below 1000.*/


int main()
{
	int sum = 0;
	
	for (int i = 1; i<1000; i++)
	{
		if (i%3 == 0 || i%5 == 0)
		{
			sum = sum + i;
		}
	}

	
	
	cout << "Sum : " << sum;
}
