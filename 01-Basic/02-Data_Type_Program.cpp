#include <iostream>
using namespace std;

int main(int argc, const char** argv) {
    // data types
    int a = 123;
    char ch = 'a';
    bool bl = true;
    float f = 1.2;
    double d = 1.23;

    cout << "Int - " << a <<endl;
    cout << "Char - " << ch <<endl;
    cout << "Bool - " << bl <<endl;
    cout << "Float - " << f <<endl;
    cout << "Double - " << d <<endl;

    int size = sizeof(a);
    cout << "Size of a : " << size << endl;

    // type casting
    int ascii = 'a';
    cout << "ascii - " << ascii << endl;

    // unsigned
    unsigned int ua = 123;
    unsigned int na = -123;

    cout << "+ve unsigned int : " << ua << endl;
    cout << "-ve unsigned int : " << na << endl;
}