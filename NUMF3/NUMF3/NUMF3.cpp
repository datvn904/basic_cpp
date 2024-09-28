#include <bits/stdc++.h>
using namespace std;

int n;
int reversed_output;

int reverse_int(int interger) {
  int reversed = 0;
  while (interger > 0) {
    int last_digit = interger %10;
    reversed = (10 * reversed) + last_digit;
    interger = (interger - last_digit) / 10;
  }
  return reversed;
}
int main() {
  cin >> n;
  reversed_output = reverse_int(n);
  cout << reversed_output;
  return 0;
}

