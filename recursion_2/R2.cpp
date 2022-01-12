//first n natural no


#include<bits/stdc++.h>
using namespace std;

void printnat(int n)
{
    if(n>=1)
    {
     printnat(n-1);
     cout<<n<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    //cout<< n + printnat(n-1);
    printnat(n);
}
