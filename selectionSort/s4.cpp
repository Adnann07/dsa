
//findKthSmallest
#include<bits/stdc++.h>


using namespace std;
int  selectionSortKthSmallest(vector<int>& a,int k)
{
    int n;
    n=a.size();


  for(int i=0;i<k;i++)
  {
      int indexMin=i;
      for(int j=i+1;j<n;j++)
      {
          if(a[indexMin]>a[j])

          {
              indexMin=j;
          }
      }
      swap(a[i],a[indexMin]);
  }
  return a[k-1];

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
    int k;
    cout<<"enter kth element: "<<endl;
    cin>>k;
    selectionSortKthSmallest(v,k);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}



