#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m), result(n + m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    while (i < n) {
        result[k++] = a[i++];
    }

    while (j < m) {
        result[k++] = b[j++];
    }

    for (int i = 0; i < n + m; i++) {
        cout << result[i] << " ";
    }

    return 0;
}