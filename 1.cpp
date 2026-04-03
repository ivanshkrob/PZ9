#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    if (n == 1) {
        cout << "Один" << endl;
    } else if (n == 2) {
        cout << "Два" << endl;
    } else if (n == 3) {
        cout << "Три" << endl;
    } else {
        cout << "Ошибка" << endl;
    }

    return 0;
}
