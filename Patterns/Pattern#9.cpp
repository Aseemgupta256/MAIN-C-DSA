/*Program to create Half Diamond Invert
    *********
     *******
      *****
       ***
        * */
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i =5;
while(i>0)
{
    int j=1;
    while (j<=n-i)
    {
        cout<<" ";
        j++;
    }
    int k=2*i-1;
    int d = 1;
    while(d<=k)
    {
        cout<<"*";
        d++;
    }
    cout<<endl;
    i--;
}
    return 0;
}