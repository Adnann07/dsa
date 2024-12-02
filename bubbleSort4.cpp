

#include<bits/stdc++.h>
using namespace std;

int bubbleSort(int a[],int start,int end){

    for(int i=start;i<end-1;i++)
    {
        for(int j=end-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }



}

int findMedian(int a[],int n ){

    if(n%2==0)
    {
        return (a[n/2]+a[(n/2)-1])/2;
    }
    else
    {
        return a[n/2];
    }

}

int main()
{

    int a[]={1,2,3,4,5,2,3,6,8,53,12};
    int n=sizeof(a)/sizeof(a[n]);

    bubbleSort(a,n/2,n);

    cout<<"partially sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int median=findMedian(a,n);
    cout<<"Median "<<median<<endl;
}
