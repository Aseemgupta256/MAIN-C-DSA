/*Program to create Half Hollow Diamond
         *
        * *
       *   *
      *     *
     ********* */
#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int i =1;
while(i<=n)
{
    int j=1;
    while (j<=n-i)
    {
        cout<<" ";
        j++;
    }
    int d = 1;
    while(d<=2*i-1)
    {   if(i<n){
        if(d==1||d==2*i-1){
        cout<<"*";
        }
        else{
            cout<<" ";
        }}
        else{
           cout<<"*"; 
        }
        d++;
    }
  
    cout<<endl;
    i++; 
}
    return 0;
}