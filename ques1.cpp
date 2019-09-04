#include<iostream>
using namespace std;
int main()
{
  int a,b,c,d,y,z;
  cin>>a>>b>>c>>d;
  y=a-c;
  z=a%c;
  if(z==0)
  {
    b=b+d;
    if(y==0)
    {
      cout<<b;
    }
  }
}