#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    while (n)
    {
        float celsius, fahrenheit;
        int option;

        cout << endl
             << "1) Celsius to Fahrenheit" << endl
             << "2) Fahrenheit to Celsius" << endl
             << "3) Exit" << endl
             << "Press 1, 2 or 3" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
            cout << endl
                 << "Enter temperature in degree centigrade: ";
            cin >> celsius;
            fahrenheit = (9 * celsius) / 5 + 32;
            cout << "The temperature in fahrenheit is: " << fahrenheit << " F" << endl;
            break;

        case 2:
            cout << endl
                 << "Enter temperature in fahrenheit: ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5 / 9;
            cout << "The temperature in celsius is: " << celsius << " C" << endl;
            break;

        case 3:
            cout << endl
                 << "Thank You !!";
            n = 0;
        }
    }
    return 0;
}