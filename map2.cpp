#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
       map<char,int> mp;
       char repeat='\0';
       for(char ch: s)
       {
           mp[ch]++;
           if(mp[ch]>1)
           {
               repeat=ch;
               break;
           }
       }
       if(repeat!='\0') cout<<repeat<<endl;
       else cout<<"no repeats"<<endl;
    }
}

