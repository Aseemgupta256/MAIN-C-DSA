/*Program to create Half Hollow Diamond
         *
        * *
       *   *
      *     *
     ********* */
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i =1;
while(i<=5)
{
    int j=1;
    while (j<=n-i)
    {
        cout<<" ";
        j++;
    }
    int s=1;
    while(s<=2*i-1)
    {
        if(i==1 || i==n || s==1 || s==2*i-1)
        {
        cout<<"*";
        }
                   else{
                cout<<" ";
            }
        
        s++;
    }
     cout<<endl;
    i++; 
}
    return 0;
}
