/*Program to create Number palinderom pattern
              1
             232
            34543
           4567654 */
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
        int sd = i;
        int s = 1;
        while (s <= i) {
            cout << sd;
            s++;
            sd++;
        }
        int k = 2*i-2;
        int sf=1;
        while  (sf<=i-1)
        {
            cout<<k;
            k--;
            sf++;
        }
        
        cout << endl;
        i++;
    }

    return 0;
}