#include <iostream>
#include <string>

using namespace std;

int func1(int value) {
  if (value == 0) {
    return 0;
  } else {
    return (value % 10) + func1(value / 10);
  }
}

int func2(int value) {
  int result = 0;
  while (value > 0) {
    result += value % 10;
    value = value / 10;
  }
  return result;
}

int func3_helper(int value, int result) {
  if (value == 0) {
    return result;
  } else {
    return func3_helper(value / 10, result + value % 10);
  }
}

int func3(int value) {
  return func3_helper(value, 0);
}

int main(int, char **argv) {
  int value = stoi(argv[1]);
  cout << func1(value) << endl;
  cout << func2(value) << endl;
  cout << func3(value) << endl;
}
