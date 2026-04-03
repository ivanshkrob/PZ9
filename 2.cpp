#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cin >> n;

    // Ваш код:
    if (n == 1) {
        cout << "Понедельник" << endl;
    } else if (n == 2) {
        cout << "Вторник" << endl;
    } else if (n == 3) {
        cout << "Среда" << endl;
    } else if (n == 4) {
        cout << "Четверг" << endl;
    } else if (n == 5) {
        cout << "Пятница" << endl;
    } else if (n == 6) {
        cout << "Суббота" << endl;
    } else if (n == 7) {
        cout << "Воскресенье" << endl;
    } else {
        cout << "Неверный день" << endl;
    }

    return 0;
}
