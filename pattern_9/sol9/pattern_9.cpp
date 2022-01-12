#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
int row = n-1;
 int x=1;
 int y = row*2-1;
 for(int out = row ; out>=1 ; out--)
 {
     for(int in = 1; in <=row*2; in++)
     {
         if(in == x || in == y)
         {
             cout<<out;
         }
         else
         {
             cout<<" ";
         }
     }
     x++;
     y--;
     cout<<"\n";



}
}
