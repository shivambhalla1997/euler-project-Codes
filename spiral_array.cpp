#include<stdio.h>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{
    int row,column;
    row=3;
    column=3;
    int arr[row][column];
    int k=0;
    for(int i=0;i<row;i++)  // filling the array with 0-8 value
        for(int j=0;j<column;j++)
        arr[i][j]=k++;
    int top=0;
    int bottom=row;
    int left=0;
    int right=column;

    //making the spiral
    int dir=1;
    while(top<=bottom && left<=right)
    {
        if(dir==1) //left->right
        {
            for(int i=left;i<right;i++)
                cout<<arr[top][i]<<" ";
            top++;
            dir=2;
        }
        else if(dir==2) //top->bottom
        {
            for(int i=top;i<bottom;i++)
                cout<<arr[i][right-1]<<" ";
            right--;
            dir=3;
        }
        else if(dir==3) //right->left
        {
            for(int i=right-1;i>=left;i--)
                cout<<arr[bottom-1][i]<<" ";
            bottom--;
            dir=4;
        }
        else if(dir==4) //bottom->top
        {
            for(int i=bottom-1;i>=top;i--)
                cout<<arr[i][left]<<" ";
            left++;
            dir=1;
        }
    }


}
