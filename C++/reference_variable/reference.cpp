#include <iostream>
using namespace std;

int swap(int &, int &);
int getnum();

int main()
{
    int num1 = getnum();
    int num2 = getnum();
    cout << "Values before swap: " << num1 << ", " << num2 << endl;
    swap(num1, num2);
    cout << "Values after swap: " << num1 << ", " << num2 << endl;
    return 0;
}

int getnum()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    return num;
}

int swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}