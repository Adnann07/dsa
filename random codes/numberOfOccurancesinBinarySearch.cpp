
//Number of Occurrences of a Target Using Binary Search

#include <bits/stdc++.h>
using namespace std;

int findFirstOccurrence(vector<int>& v, int size, int key) {
    int left = 0, right = size - 1;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (v[mid] == key) {
            result = mid;
            right = mid - 1;
        } else if (v[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int findLastOccurrence(vector<int>& v, int size, int key) {
    int left = 0, right = size - 1;
    int result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (v[mid] == key) {
            result = mid;
            left = mid + 1;
        } else if (v[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int n, key;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout<<"enter key: "<<endl;
    cin >> key;

    int first = findFirstOccurrence(v, n, key);
    int last = findLastOccurrence(v, n, key);

    if (first != -1 && last != -1) {
        cout << last - first + 1 << endl;
    } else {
        cout << "Not found" << endl;
    }
    return 0;
}
