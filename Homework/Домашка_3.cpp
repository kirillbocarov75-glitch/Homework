#include <iostream>

void count_characters(const char str[], int& letters,
    int& digits, int& spaces, int& others) {
    letters = digits = spaces = others = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) letters++;
        else if (c >= '0' && c <= '9') digits++;
        else if (c == ' ') spaces++;
        else others++;
    }
}

int main() {
    int letters, digits, spaces, others;

    count_characters("Hello 123!", letters, digits, spaces, others);
    std::cout << "Результат: Букв: " << letters << "; Цифр: " << digits
        << "; Пробелов: " << spaces << "; Других: " << others << "\n";

    return 0;
}