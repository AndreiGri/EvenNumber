#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменяем кодировку консоли:
    system("chcp 1251 > nul");

    int a = 0;

    cout << "Введите число: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << "Число " << a << " чётное!" << endl;
    }
    else {
        cout << "Число " << a << " не чётное!" << endl;
    }

    // Задержка консольного окна:
    system("pause > nul");
    return 0;
}