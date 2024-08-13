#include <iostream>

/*Problem 2: By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.*/

using namespace std;
int main()
{
	int first = 0, second = 1,  next, sum = 0;
	
	while (true){
		next = first + second;
		
		if (next >= 4000000){
			break;
		}
		
		first = second;
		second = next;
		
		if (next %2 == 0){
			sum = sum + next;
		}
	}
	cout << sum;
	return 0;
}
