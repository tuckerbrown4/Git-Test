#include <iostream>

using namespace std;

int sum(int n) {
  return n + 1;
}

int product(int n) {
  return n * 1;
}

int main() {
  int n;
  cout << "Enter a number. ";
  cin >> n;

  cout << sum(n) << endl;
  cout << product(n) << endl;
  
  return 0;
}


