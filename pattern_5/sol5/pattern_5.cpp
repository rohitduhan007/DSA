#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n;
    cin>>n;
    {



    int rows=1;
    while(rows<n)
    {
        int space = n-rows ;
        while(space)
        {
            cout<<" ";
            space--;

        }
        int col = 1;
        while(col <= rows)
        {
            cout<<"* ";
            col++;
        }
        cout<<endl;
        rows++;


    }
    }
    {

         int rows = 1;
         while(rows<=n){

        //int i=1;
        int space = 1;
        while (space < rows)
        {
            cout<<" ";
            space++;

        }
        //int str = n-rows;
        int col = 1;
        while(col <= n-rows+1)
        {
            cout<<"* ";
            col++;
            //str++;


        }

        cout<<endl;
        rows++;
         }
    }



}
