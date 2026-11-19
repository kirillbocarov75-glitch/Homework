#include <iostream>

// ЗАДАЧА 5: Минимум каждого столбца
int main() {
    int n, m;
    std::cin >> n >> m;

    int a[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> a[i][j];

    for (int j = 0; j < m; j++) {
        int mn = a[0][j];
        for (int i = 1; i < n; i++)
            if (a[i][j] < mn) mn = a[i][j];
        std::cout << mn << " ";
    }

    return 0;
}

// ЗАДАЧА 7: Транспонирование
int main() {
    int n, m;
    std::cin >> n >> m;

    int a[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> a[i][j];

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++)
            std::cout << a[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}


// ЗАДАЧА 8: Проверка симметричности
int main() {
    int n;
    std::cin >> n;

    int a[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            std::cin >> a[i][j];

    bool sym = true;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i][j] != a[j][i]) sym = false;

    if (sym) std::cout << "yes";
    else std::cout << "no";

    return 0;
}
