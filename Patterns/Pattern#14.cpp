/*Program to create Half Hollow Diamond Inverted
     *********
      *     *
       *   *
        * *
         * */
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i =n;
while(i>0)
{
    int j=n-i;
    while (j>0)
    {
        cout<<" ";
        j--;
    }
    int s=2*i-1;
    while(s>0)
    {
        if(i==1 || i==n || s==1 || s==2*i-1)
        {
        cout<<"*";
        }
                   else{
                cout<<" ";
            }
        
        s--;
    }
     cout<<endl;
    i--; 
}
    return 0;
}
