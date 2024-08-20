#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll gcd(ll a, ll b){

    ll t;

    while(b != 0){
        t = b;
        b = a % b;
        a = t;
    }

    return a;
}

ll calc_lcm(ll a, ll b){
    return (a*b) / gcd(a,b);
}




int main(){

    ll lcm = 1;

    for (int i = 2; i <= 20; i++)
    {
        lcm = calc_lcm(lcm, i);
    }
    



    cout << lcm;


}