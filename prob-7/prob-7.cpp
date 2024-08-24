#include<bits/stdc++.h>
using namespace std;

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
int main(){
    int i = 2;
    int j = 1;
    while (j<= 10001){
        if(primeCheck(i)){
        j++;
    }
    i++;

    }
    
   cout << i - 1; // -1 to nullify the i++ in while loop
   
}