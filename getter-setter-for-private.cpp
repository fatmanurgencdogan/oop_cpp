#include <iostream>
using namespace std;
class myclass {
private:
int a;
public:
void set_a(int num);
int get_a();
};

void myclass::set_a(int num){
a=num;
}

int myclass::get_a(){
return a;
}

int main(){
    
myclass object_1,object_2;
object_1.set_a(15);
object_2.set_a(22);

cout<< " The value of a in object_1 : " <<object_1.get_a()<<endl;
cout<< " The value of a in object_2 : " <<object_2.get_a()<<endl;

return 0;
}