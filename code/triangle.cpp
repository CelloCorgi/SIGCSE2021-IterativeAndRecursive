#include <iostream>
#include <string>

using namespace std;

void func1(int value) {
    if (value == 0) {
        return;
    }
    for (int i = 0; i < value; i++) {
        cout << '*';
    }
    cout << endl;
    func1(value - 1);
}

void func2(int value) {
    for (int i = value; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << endl;
    }
    return;
}


int main() {
    func1(3);
    func2(3);
}
