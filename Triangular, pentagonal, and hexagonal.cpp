#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    for(long long int i=200;i<=1000000;i++)
    {
        long long int T=(i*(i+1))/2;
        long long int j=(1+sqrt(1+(24*T)))/6;
        long long int P=(j*((3*j)-1))/2;
        if(P==T) //checking for same pentagon and triangular number
        {
            long long int k=(1+sqrt(1+(8*T)))/4;
            long long int H=k*((2*k)-1);
            if(H==T) //checking for same triangluar number and hexagonal number which is also a pentagon number
                cout<<T<<endl;  // printing the number within that loop range
        }
    }
    return 0;
}
