#include <bits/stdc++.h>
using namespace std;

// There's no saying it will be double or float
int n_input;
string str_n;
string reversed_str_n;
int reversed_n;

int main() {
  cin >> n_input;

  // Turn interger to string first
  str_n = to_string(n_input);

  // As far as I'm aware, there's no way to reverse string in cpp. We have to use tradition method, "loop"
  // IMPORTANT: We can't use long unsigned int here; it caused issue for >= 0 loop; because unsigned value can't go under 0 so -1 will never happen;
  // It will loop and never stop like while loop
  for (int i = str_n.length(); i >= 0; i--) {
    // Just learned this; std::string::size_type is also a specific type for .length only; they're not int
    reversed_str_n += str_n[static_cast<string::size_type>(i)];
  }

  // Print it out
  cout << reversed_str_n;

  return 0;
}
