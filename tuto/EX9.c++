#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, a, b;
  cin >> x >> a >> b;
 
  // 1.の出力
  x++;
  cout << x << endl;
 
  // ここにプログラムを追記
  int c = x * (a + b);
  cout << c << endl;
  cout << c * c << endl;
  cout << c * c - 1 << endl;
}