#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    if (n == 5) {
        cout << "Отлично" << endl;
    } else if (n == 4) {
        cout << "Хорошо" << endl;
    } else if (n == 3) {
        cout << "Удовлетворительно" << endl;
    } else if (n == 1 || n == 2) {
        cout << "Плохо" << endl;
    } else {
        cout << "Ошибка" << endl;
    }

    return 0;
}
