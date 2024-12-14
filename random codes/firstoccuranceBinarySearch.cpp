#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int>& a, int key) {
    int left = 0, right = a.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] == key) {
            result = mid;
            right = mid - 1;
        } else if (a[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int key;
    cout << "Enter the target element: ";
    cin >> key;

    int result = firstOcc(v, key);

    if (result != -1) {
        cout << key << " has been found at position " << result + 1  << endl;
    } else {
        cout << key << " not found in the array." << endl;
    }

    return 0;
}
