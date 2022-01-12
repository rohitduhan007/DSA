//first n odd numbers
#include<bits/stdc++.h>
using namespace std;

void printnat(int n)
{
    for(int i=1 ; i<=n ; i++  )
    {
    if( i%2 != 0)
    {
        cout <<i<<" ";
    }
    }

}

int main()
{
    int n;
    cin>>n;
    //cout<< n + printnat(n-1);
    printnat(n);
}

