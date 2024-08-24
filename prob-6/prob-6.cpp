#include<bits/stdc++.h>
using namespace std;

int main(){

    int sumOfSquares = 0;
    for(int i = 1; i<=100; i++){
        int currentSquare = i * i;
        sumOfSquares += currentSquare;
    }

    int sum = 0;
    for(int i = 1; i <=100; i++)
    {
        sum = sum + i;
    }


    int squareOfSum = sum * sum;

    int diff = squareOfSum - sumOfSquares;

    cout << diff;


}