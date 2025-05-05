#include<iostream>
using namespace std;
int main()
{
    int j, k;
    for(j=1;j<=4;j++)
    {
        for(k=1;k<=j;k++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
    cout<<"-------****----------"<<endl;

    int r,c ;
    for(r=1;r<=4;r++)
    {
        for(c=4;c>=r;c--)
        {
            cout<<"*";

        }
        cout<<endl;

    }
    cout<<"------****------"<<endl;

    int i;
    
    
    int rows=4;
    for(int j=1;j<=rows;j++)
    {
        int k;

        for(k=rows-j;k>=1;k--)
        {
            cout<<" ";

        }
        int i;
        for(i=1;i<=2*j-1;i++)
        {
            // cout<<"*";
            if(i%2==0) cout<<" ";
            else       cout<<"*";
        }
        cout<<endl;

    }
    cout<<"reverse hill pattern"<<endl;
    
    rows=5;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=2*(i-1);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=(rows-i)*2-1;k++)
        {
                cout<<"* ";

        }
         cout<<endl;
      cout<<"********************************";
      

         /*
         **********
         *        *
         *        *
         *        *   
         **********
         */

        
    }
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(i==1||i==5)
            {
                cout<<"*";
            }
            else
            {
                if(j==1||j==10){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                
            }
        }
        cout<<endl;
    }
    
}  
