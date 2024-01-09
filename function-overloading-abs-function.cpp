#include <iostream>
using namespace std;


int abs1(int n);
long abs1(long n);
double abs1(double n);
int main(){
    int x=-5;
    long y=10; 
    double z=20.12;

    cout << " integer number: " << abs1(x) << endl;
    cout << " long integer number: " << abs1(y) << endl;
    cout << " double (reel) number : " << abs1(z) << endl;

return 0;

}
//for integer abs ()
int abs1(int n)
{
return n<0 ? -n:n;
}
//for long integer abs ()
long int abs1(long int n)
{
return n<0 ? -n:n;
}
//for double abs ()
double abs1(double n)
{
return n<0 ? -n:n;
}