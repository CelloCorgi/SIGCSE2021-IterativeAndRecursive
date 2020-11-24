#include <iostream>
#include <string>

using namespace std;

int func2(int n);

int func1(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n - func2(func1(n - 1));
  }
}

int func2(int n) {
  if (n == 0) {
    return 0;
  } else {
    return n - func1(func2(n - 1));
  }
}

int main() {
  for (int i = 0; i < 25; ++i) {
    cout << func1(i) << " ";
  }
  cout << endl;
  for (int i = 0; i < 25; ++i) {
    cout << func2(i) << " ";
  }
  cout << endl;
}
