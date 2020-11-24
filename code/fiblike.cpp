#include <iostream>
#include <string>

using namespace std;

int func1(int n) {
  if (n <= 1) {
    return n;
  } else {
    return func1(n - 1) - 2 * func1(n - 2);
  }
}

int func2(int n) {
  if (n <= 1) {
    return n;
  }
  int a = 0;
  int b = 1;
  for (int i = 1; i < n; ++i) {
    int c = b - 2 * a;
    a = b;
    b = c;
  }
  return b;
}

int func3_helper(int n, int i, int a, int b) {
  if (i == n) {
    return b;
  } else {
    return func3_helper(n, i + 1, b, b - 2 * a);
  }
}

int func3(int n) {
  if (n <= 1) {
    return n;
  } else {
    return func3_helper(n, 1, 0, 1);
  }
}

int main() {
  for (int i = 0; i < 10; ++i) {
    cout << func1(i) << " ";
  }
  cout << endl;
  for (int i = 0; i < 10; ++i) {
    cout << func2(i) << " ";
  }
  cout << endl;
  for (int i = 0; i < 10; ++i) {
    cout << func3(i) << " ";
  }
  cout << endl;
}
