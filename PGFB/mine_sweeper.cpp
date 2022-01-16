#include <iostream>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; ++i)

int H, W;
string s[50];
int main()
{
    cin >> H >> W;
    rep(i, H) cin >> s[i];

    rep(h, H) rep(w, W) if (s[h][w] == '.')
    {
        s[h][w] = '0';
        rep(i, 3) rep(j, 3)
        {
            int x = h - 1 + i, y = w - 1 + j;
            if (x >= 0 && x < H && y >= 0 && y < W)
                if (s[x][y] == '#')
                    ++s[h][w];
        }
    }
    rep(i, H) cout << s[i] << endl;
}