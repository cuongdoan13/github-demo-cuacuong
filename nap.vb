#include <iostream>
using namespace std;
class diem
{
    private:
    int a[5];
    public:
    diem(int d1,int d2,int d3)
    {
    a[0]=d1;
    a[1]=d2;
    a[2]=d3;
    }
    int operator [](int dec)
    {
        return a[dec];
    }
};
int main()
{
    diem b(1,2,3);
    cout<<b[0]<<b[1]<<b[2];
    return 0;
}