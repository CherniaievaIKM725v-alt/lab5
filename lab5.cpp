#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");

    int n, m;
    int k;

    cout << "Введіть перше число n: ";
    cin >> n;
    cout << "Введіть друге число m: ";
    cin >> m;

    // Починаємо перебір з першого числа
    k = n;

    // Цикл працює, поки k не ділиться на n АБО k не ділиться на m
    while (k % n != 0 || k % m != 0)
    {
        k++; // Перевіряємо наступне число
    }

    cout << "НСК = " << k << endl;

    return 0;
}
