#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    int size = n;
    int pos = 0;

    while (size > 1) {
        pos = (pos + k - 1) % size;

        cout << "astronot ke : " << a[pos] << endl;

        int removed_val = a[pos];

        if (removed_val % 2 == 0) k += 2;
        else k -= 1;
        if (k < 2) k = 2;

        for (int i = pos; i < size - 1; i++) {
            a[i] = a[i + 1];
        }
        size--;
    }

    cout << "astronot ke :" << a[0] << endl;

    delete[] a;

    return 0;
}
