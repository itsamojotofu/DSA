#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marbles = 0;
    int squares;
    cin >> squares;
    marbles += squares / 100;
    marbles += squares % 100 / 10;
    marbles += squares % 10;

    cout << marbles << endl;
}