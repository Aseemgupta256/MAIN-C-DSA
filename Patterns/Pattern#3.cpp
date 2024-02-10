/*Program to create left triangle
    *****
    ****
    ***
    **
    * */
#include<iostream>
using namespace std;
int main()
{
    int i =5;
    do{
        int j =i;
        while (j>0)
        {
            cout<<"*";
            j--;
        }
        cout<<endl;
           i--;
    } while(i>=1);
    return 0;
}