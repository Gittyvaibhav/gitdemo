#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char op;
    cout << "ENTER  THE PROBLEM : ";
    cin >> x >> op >> y;
    switch (op)
    {
    case '+':
        cout << x + y;
        break;

    case '-':

        cout << x - y;
        break;

    case '*':

        cout << x * y;
        break;

    case '/':

        cout << x / y;
        break;
    }
}
