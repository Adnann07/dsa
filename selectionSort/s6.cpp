//sort only a portion

int selectionSort(vector<int>& a)
{
    int n=a.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[minIndex]>a[j])
            {
                minIndex=j;
            }
        }
        swap(a[i],a[minIndex])
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
}
