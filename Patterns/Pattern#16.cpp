/*Program to create pascles Triangle
              1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1 */
#include<iostream>
using namespace std;

int fact(int n) {
    int f = 1;
    int d = 1;
    while (d <= n) {
        f *= d;
        d++;
    }
    return f;
}

int main() {
    int n = 5; // Number of rows
    int i = 0;

    while (i < n) {
        int j = n - i - 1;
        while (j > 0) {
            cout << " ";
            j--;
        }
        
        int s = 0;
        while (s <= i) {
            cout << fact(i) / (fact(s) * fact(i - s)) << " ";
            s++;
        }
        
        cout << endl;
        i++;
    }

    return 0;
}
