#include <iostream>
#include <string>

using namespace std;

void func1(int array[], int size) {
  if (size > 1) {
    int tmp = array[0];
    array[0] = array[size - 1];
    array[size - 1] = tmp;
    func1(array + 1, size - 2);
  }
}

void func2(int array[], int size) {
  while (size > 1) {
    int tmp = array[0];
    array[0] = array[size - 1];
    array[size - 1] = tmp;
    ++array;
    size -= 2;
  }
}

void print_array(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr1[] = { 1, 2, 3, 4, 5 };
  int arr2[] = { 1, 2, 3, 4, 5, 6 };
  func1(arr1, sizeof arr1 / sizeof *arr1);
  print_array(arr1, sizeof arr1 / sizeof *arr1);
  func2(arr1, sizeof arr1 / sizeof *arr1);
  print_array(arr1, sizeof arr1 / sizeof *arr1);
  func1(arr2, sizeof arr2 / sizeof *arr2);
  print_array(arr2, sizeof arr2 / sizeof *arr2);
  func2(arr2, sizeof arr2 / sizeof *arr2);
  print_array(arr2, sizeof arr2 / sizeof *arr2);
}
