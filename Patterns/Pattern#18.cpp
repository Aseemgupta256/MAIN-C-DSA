/*Program to create Number hollow pattern
    1
   1 2
  1   3
 1     4
1 2 3 4 5 */
#include<iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    int i = 1;

    while (i <=n) {
        int j = n -i;
        while (j > 0) {
            cout << " ";
            j--;
        }

        int s = 1;
        int k =1;
        while (s <= 2*i-1) {
            if(i==1||i==n)
            {
            if(s%2!=0)
                {
                  cout<<k;
                  k++;
                }
                else{
                    cout<<" ";
                }
            }
            else
            {
             if(s==1){
                cout<<"1";
             }
             else if (s==2*i-1){
                cout<<i;
             }
             else
             {
                cout<<" ";
             }
            }
            
            s++;
            
        }       
        cout << endl;
        i++;
    }

    return 0;
}