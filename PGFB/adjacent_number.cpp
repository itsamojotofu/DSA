#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> data.at(i);
    }

    // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する

    int num = -1;
    string ans = "NO";
    for (int x: data){
        if(x == num){
            ans = "YES";
            break;
        }else{
            num = x;
        }
    }

    cout << ans << endl;
}