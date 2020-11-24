#include <iostream>
#include <string>

using namespace std;

int func1(int x, int y) {
  if (y == 0) {
    return x;
  } else {
    return func1(y, x % y);
  }
}

int func2(int x, int y) {
  while (y != 0) {
    int tmp = x % y;
    x = y;
    y = tmp;
  }
  return x;
}

int main(int argc, char **argv) {
  if (argc < 3) {
    cout << "x and y required" << endl;
    return 1;
  }
  int x = stoi(argv[1]);
  int y = stoi(argv[2]);
  cout << func1(x, y) << endl;
  cout << func2(x, y) << endl;
}
