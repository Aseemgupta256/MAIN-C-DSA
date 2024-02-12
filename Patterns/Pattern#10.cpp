/*Program to create Half Diamond with Spaces
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
while(i<=5)
{
    int j=n-i;
    while (j>0)
    {
        cout<<" ";
        j--;
    }
    int d = 1;
    while(d<=i)
    {
        cout<<"*";
        cout<<" ";
        d++;
    }
    cout<<endl;
    i++;
}
    return 0;
}