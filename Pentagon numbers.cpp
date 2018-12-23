#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    int N=100000;
    for(long long int i=10;i<N;i++)
    {
        for(long long int j=i+1;j<=N;j++) // creating various combinations
        {
            long long int P1=(i*((3*i)-1))/2;  
            long long int P2=(j*((3*j)-1))/2;
            long long int Diff=P2-P1;  //difference of the 2 possible pentagon numbers
            long long int Sum=P2+P1;   //Sum of the 2 possible pentagon numbers
            long long int D2=(1+sqrt(1+(24*Diff)))/6; //checking if the difference is a pentagon number
            long long int Diff2=(D2*((3*D2)-1))/2;
            long long int D1=(1+sqrt(1+(24*Sum)))/6;  //checking if the sum is a pentagon number
            long long int Sum2=(D1*((3*D1)-1))/2;
            if(Sum==Sum2 && Diff==Diff2) //checking if the final number if such a pentagon pair exist
            {
                cout<<i<<" "<<j<<" "<<P2-P1<<endl;  // printing the pair and the difference
            }

        }
    }
}
