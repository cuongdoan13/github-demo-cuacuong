#include <iostream>
using namespace std;
class phanso
{
 private:
 int tu,mau;
 public:
 phanso(int t,int m):tu(t),mau(m){}
 phanso (int t):tu(t),mau(1){}
 friend ostream operator << (ostream & os,phanso a);


};
ostream operator << (ostream &os,phanso a)
{
os<<a.tu<<"/"<<a.mau;
}
int main ()
{
    phanso B(2);
    cout<<B;
    return 0;
}