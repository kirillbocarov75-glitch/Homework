#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int* a = new int[n];
    for (int i = 0; i < n; i++) std::cin >> a[i];

    // считаем положительные
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0) count++;

    // создаём второй динамический массив
    int* b = new int[count];
    int k = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0) b[k++] = a[i];

    std::cout << "Количество положительных: " << count << "\n";
    std::cout << "Новый массив: ";
    for (int i = 0; i < count; i++) std::cout << b[i] << " ";
    std::cout << "\n";

    delete[] a;
    delete[] b;

    return 0;
}