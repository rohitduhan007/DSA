#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
{




    int row = 1;
    while(row <= n)
    {
        int space = n-row ;
        while(space)
        {
            cout<<" ";
            space-- ;

        }
        cout<<row;


        int x = 2;
        while(x >= (n+1)/2)
        {
            cout<<" ";
            x++ ;

        }

       {
           int space = 1;
           while(space < row-1)
           {
               cout<<" ";
               space++;
           }
       }
       {
           int space = 1;
           while(space < row-1)
           {
               cout<<" ";
               space++;
           }
       }





        if(row > 1)
        {
            cout<<row;
        }

        cout<<endl;
        row++;

    }
}
{
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

}


