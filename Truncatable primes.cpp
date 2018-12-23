#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    long long int N=1000000;
    long long int sum=0;
    long long int arr[N];
    memset(arr,1,sizeof(arr));
    arr[0]=0;
    arr[1]=0;
    for(long long int i=2;i<N;i++) //sieve for prime
    {
        if(arr[i]!=0 && (2*i)<=N)
        {
            for(long long int j=(i+i);j<=N;j+=i)
            {
                arr[j]=0;
            }
        }
    }

    for(long long int i=10;i<N;i++)
    {
        if(arr[i]!=0) //only prime number can pass through this
        {
            int check_back=0;
            int check_front=0;
            int flag=0;
            int len=0;
            long long int k=i;
            while(k!=0)
            {
                len++;
                if(arr[k]==0)
                {
                    flag++;
                }
                k=k/10;
            }
            if(flag==0)
                {
                check_back++;}
            if(check_back==1)
            {
                k=i;
            flag=0;
            while(k!=0)
            {
                if(arr[k]==0)
                {
                    flag++;
                    break;
                }
                k=k%((int)pow(10,len-1));
                len--;
            }
            if(flag==0)
                {cout<<i<<" ";
                sum+=i;}
            }
        }
    }
    cout<<endl<<sum;
    /*cout<<endl<<endl;

    for(long long int i=2;i<N;i++)
    {
        if(arr[i]!=0)
            cout<<i<<" ";
    }
    */
    return 0;
}
