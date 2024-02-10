/*Program to create Numbered left triangle
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5 */
#include<iostream>
using namespace std;
int main()
{
    int i =5;
while(i>=1)
{
    int j=1;
    do
    {
        cout<<j;
        j++;
    } while (j<=6-i);
    cout<<endl;
    i--;
}
    return 0;
}