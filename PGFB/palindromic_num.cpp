#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int ans = 0;

    for (int i = a; i <= b; i++){
        int o,p,r,s;
        o = i % 10;
        p = i % 100 / 10;
        s = i / 10000;
        r = i / 1000 - s * 10;

        if(o == s && p == r){
            ans++;
        }
    }

    cout << ans << endl;
}