#include <bits/stdc++.h>
using namespace std;

double r1;//r1 là lớp bên ngoài
double r2;//r2 là lớp bên trong

int main() {
  cin >> r1 >> r2;
  cout << fixed << setprecision(4) << M_PI * (pow(r1, 2) - pow(r2, 2));

  return 0;
}
