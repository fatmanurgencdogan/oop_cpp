#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#define SIZE 255  

class strtype {
private:
    char *p;
    int len;

public:
    strtype();     // constructor
    ~strtype();    // destructor
    void set(char *ptr);
    void show();
};

// String nesnesini başlat (constructor)
strtype::strtype() {
    p = (char *)malloc(SIZE);
    if (!p) {
        cout << "Allocation error" << endl;
        exit(1);
    }
    *p = '\0';
    len = 0;
}

// String nesnesini yok etme (destructor)
strtype::~strtype() {
    cout << "Freeing p" << endl;
    free(p);
}

void strtype::set(char *ptr) {
    if (strlen(ptr) >= SIZE) {
        cout << "String too big";
        exit(1);
    }
    strcpy(p, ptr);
    len = strlen(p);
}

void strtype::show() {
    cout << p << " Length of the string is: " << len << endl;
}

int main() {
    strtype s1, s2;
    s1.set("This is a test");
    s2.set("I like C++");
    s1.show();
    s2.show();
    return 0;
}
