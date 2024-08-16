#include <bits/stdc++.h>
using namespace std;

bool checkpal(int n)
{
    int number = n;
    int reveresedNumber = 0;

    while (n > 0)
    {
        int lastDigit = n % 10;
        reveresedNumber = reveresedNumber * 10 + lastDigit;
        n = n / 10;
    }

    return number == reveresedNumber;
}

int main()
{
    int n1, n2, prod;
    n1 = 99;
    // n2 = 5;

    for (int i = n1; i >= 1; i--)
    {
        for (int j = n1; j >= 1; j--)
        {
            prod = i * j;
        }
        if (checkpal(prod))
        {
            cout << prod << " ";
            
        }
    }

    
}