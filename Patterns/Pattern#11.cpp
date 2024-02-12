/*Program to create Half Diamond with Spaces Inverted
     * * * * *
      * * * *
       * * *
        * *
         * */
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i =1;
while(i<=5)
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
    cout<<endl;
    i++;
}
    return 0;
}