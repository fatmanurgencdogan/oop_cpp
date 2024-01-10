#include <iostream>
using namespace std;

class myclass
{
private:
    int a;

public:
    myclass();  // constructor
    ~myclass(); // destructor

    void set_a(int num);
    int get_a();
};
void myclass::set_a(int num)
{
    a = num;
}

int myclass::get_a()
{
    return a;
}

myclass::myclass()
{
    cout << "In Constructor" << endl;
}
myclass::~myclass()
{
    cout << "In Destructor" << endl;
}

int main()
{
    myclass object_1;
    myclass object_2;

    object_1.set_a(15);
    object_2.set_a(22);

    return 0;
}