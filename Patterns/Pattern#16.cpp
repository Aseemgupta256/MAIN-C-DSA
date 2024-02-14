/*Program to create full Hollow Diamond
              1
            1   1
          1   2   1
        1   3   3   1
      1   4   6   4   1 */
#include<iostream>
using namespace std;

int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int f = 1;
        for (int i = 1; i <= n; ++i) {
            f *= i;
        }
        return f;
    }
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int rows = 5; // Number of rows
    for (int i = 0; i < rows; i++) {
        // Print spaces to align the triangle
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }

        // Print elements in current row
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }

        cout << endl;
    }

    return 0;
}
