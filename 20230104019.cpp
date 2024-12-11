#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& a)
{
    int n=a.size();

    for(int i=0;i<n-1;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=true;
            }
        }
        if(!swapped) break;
    }
}
void printVec(const vector<int>& a)
{
    for(int num:a)
    {
        cout<<num<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>a;
   int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
    		int item;
    		cin>>item;
    		a.push_back(item);
	}


    cout<<"Original : ";
    printVec(a);
    cout<<"Sorted  : ";
    bubbleSort(a);
    printVec(a);
}
