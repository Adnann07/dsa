#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& v, int size) {
   for(int i=1;i<n;i++)
   {
       int j=i-1;
       int key=v[j];
       while(j>=0 && v[j]>key)
       {
           v[j+1]=v[j];
           j--;
       }
       v[j+1]=key;
   }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    insertionSort(a, n);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
