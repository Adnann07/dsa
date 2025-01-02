#include<bits/stdc++.h>
using namespace std;
struct student{
    string name;
    int roll;
    float marks;
};
int main()
{
   student s1;
   cout<<"Enter name,roll,marks: "<<endl;
   getline(cin,s1.name);
  cin>>s1.roll;
  cin>>s1.marks;
   cout<<s1.name<<s1.roll<<s1.marks<<endl;
}
