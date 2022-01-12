//first n prime no
#include<bits/stdc++.h>
using namespace std;

void printnat(int n)
{
    if(n==0 || n==1)
    {
        cout<<"not a prime no";
    }else{
        int flag = 0;
    for(int i=2 ; i<=n/2 ; i++  )
    {

    if( n%i == 0)
    {
        cout << n <<" is not a prime no "<<endl;
        flag = 1;

    }

    }
     if(flag==0)
    {
     cout<< n <<" is a prime no";
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
