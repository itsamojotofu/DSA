#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> P.at(i);
    }

    // リンゴ(A)・パイナップル(P)をそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか

    int pat = 0;
    int total = 0;

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            total = A.at(i) + P.at(j);
            if (total == S) {
                pat++;
            }
        }
    }

    cout << pat << endl;
}