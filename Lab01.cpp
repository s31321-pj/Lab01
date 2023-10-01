// Lab01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    int min = 0;
    int maks = 0;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    if (a < b)
    {
        min = a;
        maks = b;
    }
    else
    {
        min = b;
        maks = a;
    }
    if (min > c)
    {
        min = c;
    }
    if (maks < c)
    {
        maks = c;
    }

    cout << "min = " << min << endl;
    cout << "maks = " << maks << endl;


    return 0;
}

