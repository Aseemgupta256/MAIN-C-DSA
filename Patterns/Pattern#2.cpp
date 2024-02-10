/*Program to create left triangle
    *
    **
    ***
    ****
    ***** */
#include<iostream>
using namespace std;
int main()
{
    int i =1;
    do{
        int j =1;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
           i++;
    } while(i<=5);
    return 0;
}