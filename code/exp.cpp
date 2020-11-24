#include <iostream>
#include <string>

using namespace std;

int func1(int x, int y) {
  if (y == 0) {
    return 1;
  } else if (y == 1) {
    return x;
  }
  
  int tmp = func1(x, y / 2);
  tmp = tmp * tmp;
  if (y % 2 == 1) {
    return x * tmp;
  } else {
    return tmp;
  }
}

int main(int argc, char **argv) {
  if (argc < 3) {
    cout << "x and y required" << endl;
    return 1;
  }
  int x = stoi(argv[1]);
  int y = stoi(argv[2]);
  cout << func1(x, y) << endl;
}
