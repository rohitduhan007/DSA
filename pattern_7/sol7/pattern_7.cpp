#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    {



    int row = 1;
    while(row<=n)
    {
        int col=1;
        int count = 5;
        while(col<=row)
        {
            cout<<count;
            count--;
            col++;


        }


        cout<<endl;
        row++;
    }
    }
    {
      int row = 1;
      while(row<=n)
      {

        int col=1;
        int count=5;
        while(col<=n-row+1)
        {
            cout<<count;
            count--;
            col++;
        }
        cout<<endl;
        row++;
      }
    }
}
