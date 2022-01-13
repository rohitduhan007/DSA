#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;//as a odd no.
    int x = 1;
    for (int i = 1 ; i <=n ; i++)
    {
        for (int j = 1 ; j <= n ; j++)
        {
            if( j<=x || j>=n-x+1 )//|| i == (2*n-1) )//|| i==1 || i==n-1 || j == 1 || j == n-1)
                cout<<j;


            else
                cout<<" ";


        }
        if(i<=n/2)
            x++;
        else
            x--;

        //x++;

        //for (int j = )
        cout<<endl;
    }
}
