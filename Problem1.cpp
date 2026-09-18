#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a;
    for (int i = 1; i <= n; i++) {
        a.push_back(i);
    }

    int pos = 0;

    while (a.size() > 1) {
        pos = (pos + k - 1) % a.size();
        
        cout << "astronot ke : " << a[pos] << endl;

        if (a[pos] % 2 == 0) k += 2;
        else k -= 1;
        if (k < 2) k = 2;

        a.erase(a.begin() + pos);
    }

    cout << "astronot ke :" << a[0] << endl;

    return 0;
}