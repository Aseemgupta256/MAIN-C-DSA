/*Program to create Half Right Diamond
    *
    **
    ***
    ****
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

while(i<=n*2-1)
{
    if(i<=5)
    {
    int j=1;
    do
    {
        cout<<"*";
        j++;
    } while (j<=i);
    }
    else{
         int j=10-i;
    do
    {
        cout<<"*";
        j--;
    } while (j>0);   
    }
    cout<<endl;
    i++;
}
    return 0;
}