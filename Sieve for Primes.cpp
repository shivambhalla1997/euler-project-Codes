#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    long long int N=100;
    long long int arr[N+1];
    memset(arr,0,sizeof(arr));
    arr[0]=arr[1]=0;
    for(long long int i=2;i<=N;i++)
    {
        if(arr[i]==0 && (2*i)<=N)
        {
            for(long long int j=(2*i);j<=N;j+=i) // making all the multiple out the number out of the list
                arr[j]=1;
        }
    }
    for(long long int i=2;i<=N;i++)  //printing the primes
        if(arr[i]==0)
        cout<<i<<" ";
}
