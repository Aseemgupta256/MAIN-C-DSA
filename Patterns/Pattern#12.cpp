/*Program to create full diamond edges inverted only
     * * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * * */
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i =1;
while(i<=2*n)
{
    if(i<=5)
    {
    int j=1;
    while (j<=i-1)
    {
        cout<<" ";
        j++;
    }
    int d = 1;
    while(d<=n-i+1)
    {
        cout<<"*";
        cout<<" ";
        d++;
    }
  }
  else{
       int j=1;
    while (j<=2*n-i)
    {
        cout<<" ";
        j++;
    }
    int d = 1;
    while(d<=i-n)
    {
        cout<<"*";
        cout<<" ";
        d++;
    }
  }
    cout<<endl;
    i++; 
}
    return 0;
}