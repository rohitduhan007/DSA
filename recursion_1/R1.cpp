//Sum of first n natural no using recursion


#include<bits/stdc++.h>
using namespace std;

int addnat(int n)
{
    if(n==1)
    {
        return 1 ;
    }
    return n+addnat(n-1);

}

int main()
{
    int n;
    cin>>n;
    cout<<"sum of "<< n <<" natural no is -> " << n+addnat(n-1) << endl;
}
