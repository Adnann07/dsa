
//Find the First Occurrence of a Target

#include <bits/stdc++.h>
using namespace std;

int firstOccurance(int a[],int size,int key)
{
int left=0, right=size-1;
    int result=-1;

while(left<=right){


    int mid=left+(right-left)/2;

    if(a[mid]==key)
    {
        result=a[mid];
        right=mid-1;
    }
    else
    {
        left=mid+1;
    }
}


    return result;//outside of while loop
}


int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int key=5;

    int i=firstOccurance(a,size,key);
    if(i!=-1) cout<<"first occurance at: "<<i<<endl;
    else cout<<"not found"<<endl;
}
