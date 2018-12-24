#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;

bool isPrime(long long int num)
{
    if(num==1)
        return false;
    else
    {
        int flag=0;
        for(long long int i=2;i<=(num/2);i++)
        {
            if(num%i==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
            return true;
        else
            return false;
    }
}

int main()
{
    //counting total primes in the spiral and printing
    for(int side=200;side<=30000;side+=2)
    {
        int len=side;
    int total=0;
    long long int starting=1;
    for(int i=3;i<=len;i+=2)
    {
        long long int ending=i*i;
        for(starting;starting<=ending;starting+=(i-1))
        {
            if(isPrime(starting))
            {
                total++;
            }
        }
        starting+=2;
    }

    double total_diagnal_elements=((len-3)*2)+5;
    double per=total/total_diagnal_elements;
    cout<<side<<" "<<per<<endl;
    }

}
