#include <iostream>
using namespace std;
#define PI 3.14
class area{
private:
    float r;

public:
    void Area (double r)
    {
        cout<<"Dhruv Bheda "<<endl;
		cout<<"220130318012"<<endl;
		cout <<"area of Square is ::"<<PI*r*r<<endl;
    }
};
int main()
{
    area a;
    a.Area( 6.0);
}
