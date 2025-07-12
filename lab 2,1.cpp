#include <iostream>
using namespace std;

class Area{
    int length;
    int width;
public:
    void set_dim(int l,int w);
    Area(int l,int w);
    int cal(){return length*width;}
};
Area::Area(int l,int w)
{
    length=l;
    width=w;
}
int main()
{
    Area A1(10,30);
    cout << "A.cal()"<<endl;
}
