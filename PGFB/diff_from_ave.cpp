#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> scores(N);

    for (int i = 0; i < N; i++)
    {
        cin >> scores.at(i);
    }

    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += scores.at(i);
    }

    int mean = sum / N;

    for (int i = 0; i < N; i++)
    {
        if (scores.at(i) > mean){
            cout << scores.at(i) - mean << endl;
        }
        else {
            cout << mean - scores.at(i) << endl;
        }
    }
}