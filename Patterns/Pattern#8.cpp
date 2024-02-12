/*Program to create Right half inverted triangle
        *
       ***
      *****
     *******
    ********* */
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i =1;
while(i<=n)
{
    int j=n-i;
    while (j>0)
    {
        cout<<" ";
        j--;
    }
    int k=2*i-1;
    int d = 1;
    while(d<=k)
    {
        cout<<"*";
        d++;
    }
    cout<<endl;
    i++;
}
    return 0;
}