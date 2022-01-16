#include <bits/stdc++.h>
#include <cstdlib> // abs() for integer
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cards.at(i);
    }

    std::sort(cards.begin(), cards.end());

    int alice = 0;
    int bob = 0;

    if (n % 2 == 0) {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0) {
                alice += cards.at(i);
            }else{
                bob += cards.at(i);
            }
        }
    }
    else {
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                alice += cards.at(i);
            }
            else
            {
                bob += cards.at(i);
            }
        }
    }

    cout << abs(alice - bob) << endl;
}