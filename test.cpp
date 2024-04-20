#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
class phanso
{
    int tu,mau;
    public:
    phanso(int t=0,int m=1){set(t,m);}
    phanso (int t){set(t,1);}

     void set (int t,int m)
     {
     	this->tu=t;
     	this->mau=m;
	 }
    friend phanso  operator + (phanso a,phanso b);
    friend void  rutgon (phanso &a);
    friend ostream operator <<( ostream &os, phanso a)
    {
        os<<a.tu<<"/"<<a.mau;
    }

};
void  rutgon (phanso &a)
{
    int c=__gcd(a.tu,a.mau);
     a.tu=a.tu/c;
     a.mau=a.mau/c;
}
phanso operator + (phanso a,phanso b)
{
    a.tu=a.tu*b.mau+a.mau*b.tu;
    a.mau= a.mau*b.mau;
    rutgon(a);
  return a;
}
int main ()
{
    phanso a(2,3),b(5,4),c;
    c=a+b;
    c=a+2;
    cout<<c;
return 0;

}
