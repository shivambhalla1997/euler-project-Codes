#include<stdio.h>
#include<math.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int N=10;
    long long c=0;
    long long int n=3;  //numerator
    long long int d=2;  //denominator
    for(long long int k=1;k<=N;k++)
    {
        n=2*d+n;
        d=n-d;
        cout<<n<<"/"<<d<<" ";  // printing the series
        if((int)log10(n)>(int)log10(d))  // checking when is the numerator greator than the denominator
            c++;
    }
    cout<<endl<<c;
}
