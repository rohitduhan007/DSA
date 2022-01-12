#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1 ;
    while(row <= n)
    {
        int space =  n-row ;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        int var = 2*row-1;
        //int var = 2*row-1;
        while(j<=row)
        {
            cout<<var;
            var--;
            j++;
            //col++;

        }
        int start=row-1;
        while(start)
        {
            cout<<start;
            start--;
        }

        cout<<endl;
        row++;
    }
}
