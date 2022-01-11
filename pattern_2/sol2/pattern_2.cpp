#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,n;
    cin >> n;
    for(i=0 ; i<n ; i++ )
    {
        for(j=n-1-i ; j>0 ; j-- )
        {
            cout <<" ";

        }
        for(j=0 ; j<=i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
