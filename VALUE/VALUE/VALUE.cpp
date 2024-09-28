#include <bits/stdc++.h>
using namespace std;
int a, b, c;
double kq;

int main() {
  cin >> a >> b >> c;

  kq = double( (a + b + c) / double(a*b*c) ) + double(sqrt(a*b*c));
  cout << fixed << setprecision(2) << kq;
  return 0;
}
