#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v, int key) {
    bool swapped;
    int n = v.size();

    // Sort first part in ascending order (0 to key-1)
    for (int i = 0; i < key - 1; i++) {
        swapped = false;
        for (int j = 0; j < key - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    // Sort second part in descending order (key to n-1)
    for (int i = 0; i < n - key - 1; i++) {
        swapped = false;
        for (int j = key; j < n - i - 1; j++) {
            if (v[j] < v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int key;
    cout << "Key: " << endl;
    cin >> key;



    bubbleSort(v, key);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
