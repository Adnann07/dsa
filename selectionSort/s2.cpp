
//descending
#include<bits/stdc++.h>


using namespace std;
void  selectionSort(vector<int>& a)
{
    int n;
    n=a.size();


  for(int i=0;i<n-1;i++)
  {
      int minIndex=i;
      for(int j=i+1;j<n;j++)
      {
          if(a[minIndex]>a[j])
          {
              minIndex=j;
          }
      }
      swap(a[i],a[minIndex]);
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
    selectionSort(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

