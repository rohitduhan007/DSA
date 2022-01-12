//first n natural no


#include<bits/stdc++.h>
using namespace std;

void printnat(int n)
{
    for(int i=n ; i>=0 ; i--)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    //cout<< n + printnat(n-1);
    printnat(n);
}
