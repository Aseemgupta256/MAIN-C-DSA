/*Program to create full Hollow Diamond
         *
        * *
       *   *
      *     *
     *       *
      *     *
       *   *
        * *
         * */
#include<iostream>
using namespace std;
    int main()
    {
        int n  = 5;
        int i =1;
        int c=5;
        while(i<=2*n-1)
        {
            if(i<=n)
            {
                int j = n-i;
                while(j>0)
                {
                    cout<<" ";
                    j--;
                }
                int s =1;
                while (s<=2*i-1)
                {
                    if(i==1||s==1||s==2*i-1)
                    {
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                    s++;
                }
            }
                        else
            {
                                int j = i-n;
                while(j>0)
                {
                    cout<<" ";
                    j--;
                }
                int s=2*(2*n-i)-1;
                while (s>0)
                {
                    if(i==2*n-1||s==1||s==2*(2*n-i)-1)
                    {
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                    s--;
                }
            }

            cout<<endl;
            i++;
        }
    return 0;
}