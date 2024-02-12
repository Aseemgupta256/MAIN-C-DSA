/*Program to create Right half triangle
         *
        **
       ***
      ****
     ***** */
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i =1;

while(i<=n)
{
    
    
    int j=5-i;
    while (j>0)
    {
        cout<<" ";
        j--;
    }
    int k = 1;
        while (k<=i)
    {
        cout<<"*";
        k++;
    }   
    cout<<endl;
    i++;
}


    return 0;
}