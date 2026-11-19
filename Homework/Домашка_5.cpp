#include <iostream>

int main() {
    int choice;
    std::cout << "1 - Локальные максимумы\n";
    std::cout << "2 - Чередование знаков\n";
    std::cout << "3 - Самая длинная возрастающая серия\n";
    std::cout << "Выбор: ";
    std::cin >> choice;

    int n;
    std::cin >> n;

    int* a = new int[n];
    for (int i = 0; i < n; i++) std::cin >> a[i];

    // ЗАДАЧА 7: Локальные максимумы
    if (choice == 1) {
        for (int i = 1; i < n - 1; i++)
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
                std::cout << a[i] << " ";
        std::cout << "\n";
    }

    // ЗАДАЧА 8: Чередование знаков
    if (choice == 2) {
        bool ok = true;
        for (int i = 1; i < n; i++)
            if ((a[i - 1] > 0) == (a[i] > 0)) ok = false;

        if (ok) std::cout << "YES\n";
        else    std::cout << "NO\n";
    }

    // ЗАДАЧА 9: Самая длинная возрастающая серия
    if (choice == 3) {
        int cur = 1, best = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) cur++;
            else                 cur = 1;
            if (cur > best) best = cur;
        }
        std::cout << best << "\n";
    }

    delete[] a;
    return 0;
}