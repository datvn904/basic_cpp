#include <bits/stdc++.h>
using namespace std;
double a;
double b;

int main() {
  cin >> a;
  cin >> b;
  if (a > 1000 || b > 1000) { return 1; }
  cout << fixed << setprecision(6) << (double(pow(a, 2)) + double(pow(b, 2))) / 2 << endl;
  cout << fixed << setprecision(6) << double((a + b) / 2) << endl;
  return 0;
}
//hazz lười nói quá...
