#include <iostream>
using namespace std;
int main()
{

    int a, b;

    cout << "Enter a number : " << endl;
    cin >> a;

    cout << "Enter another number : " << endl;
    cin >> b;

    int sum;
    sum = a + b;
    cout << "Sum is : " << sum << endl;

    int subt;
    subt = a - b;
    cout << "Subtraction is : " << subt << endl;

    int mult;
    mult = a * b;
    cout << "Multiply is : " << mult << endl;

    int div;
    div = a / b;
    cout << "Division is : " << div << endl;

    return 0;
}