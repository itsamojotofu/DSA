#include <bits/stdc++.h>
using namespace std;

int main()
{
    // input 1 or 0 into the variables a, b, c to output "Moonsault"
    bool a = 1;
    bool b = 0;
    bool c = 1;

    // Don't touch the codes below.

        if (a)
    {
        cout << "Mo";
    }
    else
    {
        cout << "Yo";
    }

    if (!a && b)
    {
        cout << "bo";
    }
    else if (!b || c)
    {
        cout << "on";
    }

    if (a && b && c)
    {
        cout << "salt!";
    }
    else if (true && false)
    {
        cout << "yeah!";
    }
    else if (!a || c)
    {
        cout << "sault";
    }

    cout << endl;
}