#include <bits/stdc++.h>
using namespace std;

bool canSort(vector<int>& v, int n) {
    if (is_sorted(v.begin(), v.end())) return true;
        int Count = 0;
    for (int i = 1; i < n - 1; ++i) {
        if (v[i - 1] < v[i] && v[i] > v[i + 1]) {
                swap(v[i], v[i+1]);
            Count++;
        }
    }

   return  Count && is_sorted(v.begin(), v.end());
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        if (canSort(v, n)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
