

#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& v)
{
    int n=v.size();
    for(int i=1;i<n;i++)
    {
        int temp=v[i];
        int j=i-1;
        while(j>=0 && v[j]>temp)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=temp;
    }
}

int binarySearch(vector<int>& v,int key, bool& found)
{
    int n;
    n=v.size();

    int left=0,right=n-1;
    found=false;
    while(left<=right)
    {
        int mid = left + (right - left) / 2;

        if(v[mid]==key)
        {
            found=true;
            return mid;
        }
        else if(v[mid]<key)  left=mid+1;
        else  right=mid-1;

    }
    return left;



}

int main()
{
    vector<int> v;
    int n;

      cout << "Enter the number of elements in the vector: ";
    cin>>n;

    cout << "Enter the vector: ";
     for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    insertionSort(v);

    cout << "Sorted vector: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

     int key;
    cout << "Enter a value to search: ";
    cin >> key;

     bool found;
    int loc = binarySearch(v, key, found);

     if (found) {
        cout << "Value " << key << " found at index: " << loc << endl;
    } else {
        cout << "Value " << key << " can be inserted at index: " << loc << " to maintain sorted order." << endl;
    }





}
