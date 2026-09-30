#include <bits/stdc++.h>
using namespace std;
int binarySearch(const int* a, int l, int h, int t) {
    if (l > h) return -1;
    
    int m = l + (h - l) / 2;
    int val = *(a + m); 

    if (val == t) return m;
    return (t < val) ? binarySearch(a, l, m - 1, t) : binarySearch(a, m + 1, h, t);
}

int main() {
    int n, target;
    cout << "Enter size: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> *(a + i);

    sort(a, a + n);

    cout << "Enter target: ";
    cin >> target;

    int res = binarySearch(a, 0, n - 1, target);
    if (res != -1) cout << "Found at index: " << res << endl;
    else cout << "Not found" << endl;

    return 0;
}