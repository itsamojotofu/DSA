#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cin >> p;

    int price;

    // パターン1
    if (p == 1)
    {
        cin >> price;
    }

    // パターン2
    if (p == 2)
    {
        string text;
        cin >> text >> price;
        cout << text << "!" << endl;
    }

    int N;
    cin >> N;

    cout << price * N << endl;
}