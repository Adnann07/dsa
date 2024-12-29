#include<bits/stdc++.h>
using namespace std;


int binarySearchRecursive(vector<int>& v, int left, int right, int key) {


  if(left>right)
  {
      return -1;
  }
  int mid=left+(right-left)/2;

  if(v[mid]==key)
  {
      return key;
  }

  else if(v[mid]>key)
  {
      return binaryRecursiveSearch(v,mid+1,right,key)
  }



   else{
    return binarySearchRecursive(v,left,mid-1,key);
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
    cin >> key;


    int result=binaryRecursiveSearch(v,0,n-1,key);


    if (result != -1) {
        cout << "Found in " << result << " position" << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
