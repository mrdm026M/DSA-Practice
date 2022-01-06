#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, i = 0, sum = 0;
    cout << "Enter any number: ";
    cin >> n;

    // Ques - sum of n numbers
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << "Sum: " << sum;
    return 0;
}
