#include<bits/stdc++.h>
using  namespace std;

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

int main()

{
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    insertionSort(v);

     for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;



}
