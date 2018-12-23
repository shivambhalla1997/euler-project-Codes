#include<stdio.h>
#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    long long int N=1000000;
    for(int i=10;i<=N;i++)
    {
        long long int X2,X3,X4,X5,X6;
        X2=2*i;
        X3=3*i;
        X4=4*i;
        X5=5*i;
        X6=6*i;
        long long int XA2[10],XA3[10],XA4[10],XA5[10],XA6[10];
        memset(XA2,0,sizeof(XA2));
        memset(XA3,0,sizeof(XA3));
        memset(XA4,0,sizeof(XA4));
        memset(XA5,0,sizeof(XA5));
        memset(XA6,0,sizeof(XA6));

        while(X2!=0)
        {
            XA2[X2%10]++;
            XA3[X3%10]++;
            XA4[X4%10]++;
            XA5[X5%10]++;
            XA6[X6%10]++;
            X2/=10;
            X3/=10;
            X4/=10;
            X5/=10;
            X6/=10;
        }
        int flag=0;
        for(int j=0;j<10;j++)
        {
            if(XA2[j]!=XA3[j] || XA3[j]!=XA4[j] || XA4[j]!=XA5[j] || XA5[j]!=XA6[j])
            {
                flag++;
                break;
            }
        }
        if(flag==0)
            cout<<i<<endl;

    }
    return 0;
}
