#include <iostream>
#include <string>

using namespace std;

bool func1(int array[], int size) {
  if (size <= 1) {
    return true;
  } else  if (array[0] != array[size - 1]) {
    return false;
  } else {
    return func1(array + 1, size - 2);
  }
}

bool func2(int array[], int size) {
  while (size > 1) {
    if (array[0] != array[size - 1]) {
      return false;
    }
    ++array;
    size -= 2;
  }
  return true;
}

int main() {
  int arr1[] = { 1, 2, 3, 2, 1 };
  int arr2[] = { 1, 2, 3, 3, 2, 1 };
  int arr3[] = { 1, 2, 3, 4, 2, 1 };
  cout << boolalpha;
  cout << func1(arr1, sizeof arr1 / sizeof * arr1) << endl;
  cout << func2(arr1, sizeof arr1 / sizeof * arr1) << endl;
  cout << func1(arr2, sizeof arr2 / sizeof * arr2) << endl;
  cout << func2(arr2, sizeof arr2 / sizeof * arr2) << endl;
  cout << func1(arr3, sizeof arr3 / sizeof * arr3) << endl;
  cout << func2(arr3, sizeof arr3 / sizeof * arr3) << endl;
}
