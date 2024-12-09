#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    for(int i=0;i<=10;i++)
    {
        v.push_back(i);
    }

    cout<<"Original vector: ";
    for(int num:v)
    {
        cout<<num<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"removed last element: ";
    for(int num:v)
    {
        cout<<num<<" ";
    }
    cout<<endl;


}
