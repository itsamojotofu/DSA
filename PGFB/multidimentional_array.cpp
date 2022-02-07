#include <bits/stdc++.h>
using namespace std;

int main()
{
  // int型の2次元配列(3×4要素の)の宣言
  vector<vector<int>> data(3, vector<int>(4));

  // 入力 (2重ループを用いる)
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> data.at(i).at(j);
    }
  }

  // 0の個数を数える
  int count = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {

      // 上からi番目、左からj番目の画素が0かを判定
      if (data.at(i).at(j) == 0)
      {
        count++;
      }
    }
  }

  cout << count << endl;
}