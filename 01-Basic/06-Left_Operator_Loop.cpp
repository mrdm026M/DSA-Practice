#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // int a = 5, b = 1;

    // int AND = a & b;
    // int OR = a | b;
    // int NOTA = ~a;
    // int NOTB = ~b;
    // int XOR = a ^ b;

    // int LSHIFT = a << b;
    // int RSHIFT = a >> b;

    // cout << "a & b : " << AND << endl;
    // cout << "a | b : " << OR << endl;
    // cout << "~a : " << NOTA << endl;
    // cout << "~b : " << NOTB << endl;
    // cout << "a ^ b : " << XOR << endl;

    // cout << "a << b : " << LSHIFT << endl;
    // cout << "a >> b : " << RSHIFT << endl;

    // Fibonacci Series
    int first, second, last;
    cout << "Enter first and second number: ";
    cin >> first >> second;

    cout << "Enter last number: ";
    cin >> last;

    cout << first << " " << second << " ";

    for (int i = 0; i <= last; i++)
    {
        int sum = first + second;
        cout << sum << " ";

        first = second;
        second = sum;
    }
    return 0;
}
