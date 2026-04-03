#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char op;
    int a, b;
    cin >> op >> a >> b;

    // Ваш код:
    if (op == '+') {
        cout << a + b << endl;
    } else if (op == '-') {
        cout << a - b << endl;
    } else if (op == '*') {
        cout << a * b << endl;
    } else if (op == '/') {
        if (b == 0) {
            cout << "Деление на ноль" << endl;
        } else {
            cout << a / b << endl;
        }
    } else {
        cout << "Ошибка" << endl;
    }

    return 0;
}