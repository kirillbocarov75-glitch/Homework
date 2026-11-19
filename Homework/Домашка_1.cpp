#include <iostream>

// ЗАДАЧА 1: удалить заданный символ
std::string remove_spaces(const std::string& s, const char target) {
    std::string r = "";
    for (int i = 0; i < (int)s.size(); i++)
        if (s[i] != target) r += s[i];
    return r;
}

// ЗАДАЧА 2: подсчёт количества слов
int count_words(const std::string& s) {
    int count = 0;
    for (int i = 0; i < (int)s.size(); i++)
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')) count++;
    return count;
}

// ЗАДАЧА 3: разворот каждого слова
std::string reverse_each_word(const std::string& s) {
    std::string r = "";
    int i = 0;
    while (i < (int)s.size()) {
        int start = i;
        while (i < (int)s.size() && s[i] != ' ') i++;
        if (start != i) {
            if (r != "") r += ' ';
            for (int j = i - 1; j >= start; j--) r += s[j];
        }
        while (i < (int)s.size() && s[i] == ' ') i++;
    }
    return r;
}

int main() {
    std::cout << remove_spaces("a b c d", ' ') << "\n";        // abcd
    std::cout << count_words("hello world foo") << "\n";       // 3
    std::cout << reverse_each_word("hello world foo") << "\n"; // olleh dlrow oof
    return 0;
}