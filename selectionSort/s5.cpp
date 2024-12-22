//count swaps

#include<bits/stdc++.h>
using namespace std;
int  selectionSort(vector<int>& v)
{
    int n;
    int c=0;
    n=v.size();


  for(int i=0;i<n-1;i++)
  {
      int minIndex=i;
      for(int j=i+1;j<n;j++)
      {
          if(v[minIndex]>v[j])
          {
              minIndex=j;
          }
      }
      if(minIndex!=i)
      {
          swap(v[i],v[minIndex]);
      c++;
      }


  }
  return c;

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
    int c=selectionSort(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<c<<endl;


}
