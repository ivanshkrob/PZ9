#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int a, b;
    int op;
    cin >> a >> b >> op;

    // Ваш код:
    switch (op) {
        case 1:
            cout << a + b << endl;
            break;
        case 2:
            cout << a - b << endl;
            break;
        case 3:
            cout << a * b << endl;
            break;
        case 4:
            if (b == 0) {
                cout << "Деление на ноль" << endl;
            } else {
                cout << a / b << endl;
            }
            break;
        default:
            cout << "Ошибка" << endl;
            break;
    }

    return 0;
}