#include<bits/stdc++.h>
using namespace std;
struct book{

    string title;
    string author;
    float price;
};
int main()
{
   book b1[3];

   for(int i=0;i<3;i++)
   {
       cout<<"Enter details for book "<<i+1<<endl;
       cin.ignore();
       getline(cin,b1[i].title);
       getline(cin,b1[i].author);
       cin>>b1[i].price;


   }
   for(int i=0;i<3;i++)
       {
           cout<<b1[i].title;
           cout<<b1[i].author;
           cout<<b1[i].price;
       }
}

