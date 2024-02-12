#include<iostream>
using namespace  std;
int main()
{
// Q.15 if p=marks, c=marks, and m=marks then total=? per=? if per=below 35 then fail. if per=35-49 then 3rd division pass. if per=50-59 then 2nd year pass. if per=60-100 then 1st division pass.

int p,c,m;
cout<<"Enter three subject marks:";
cin>>p>>c>>m;
cout<<"total marks="<<p+c+m;
cout<<"percentage="<<(p+c+m)*100/300;
if((p+c+m)*100/300<35)
{
   cout<<"\nfail\n";
}
else if ((p+c+m)*100/300>=35 && (p+c+m)*100/300<=49)
{
    cout<<"\ngrade=3rd\n";
}
else if ((p+c+m)*100/300>=50 && (p+c+m)*100/300<=64)
{
    cout<<"grade=2nd\n";
}
else
{
    cout<<"grade=1st\n";
}
}
