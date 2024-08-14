#include <iostream>
#include <cmath>
using namespace std;

/*Problem 3: What is the largest prime factor of the number 600851475143?*/

bool primeCheck(int n)  
    {
        if (n == 2 || n == 3)
        {
            return true;
        }
        if (n % 2 == 0 || n % 3 == 0)
        {
            return false;
        }
        for (int i = 5; i <= sqrt(n); i = i + 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                return false;
            }
        }
        return true;
    }




int main()
{
    long long num = 600851475143;
    int squareRoot = sqrt(num); // largest prime factor cant be greater than square root of the number
    
    for (long long i = squareRoot; i >= 2; i--){
        if (primeCheck(i) && num % i == 0 ) {   // checking for prime as well as the factor of number
            cout << i;
            break;
        }
    }


}
