/*Program to create Right half inverted triangle
     *****
      ****
       ***
        **
         * */
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i =1;

while(i<=n)
{
    
    
    int j=1;
    while (j<=i-1)
    {
        cout<<" ";
        j++;
    }
    int k = n-(i-1);
        while (k>0)
    {
        cout<<"*";
        k--;
    }   
    cout<<endl;
    i++;
}


    return 0;
}