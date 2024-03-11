#include <iostream>
#include <string>
#include <exception>

// Определение класса исключения
class bad_length : public std::exception {
private:
    int len;
public:
    explicit bad_length(int length) : len(length) {}
    const char* what() const noexcept override {
        return "Вы ввели слово запретной длины!";
    }
    int get_length() const noexcept { return len; }
};

// Функция, выбрасывающая исключение, если длина строки равна запретной
int function(const std::string& str, int forbidden_length) {
    int length = str.length();
    if (length == forbidden_length) {
        throw bad_length(length);
    }
    return length;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int forbidden_length;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    std::string word;
    while (true) {
        std::cout << "Введите слово: ";
        std::cin >> word;
        try {
            int length = function(word, forbidden_length);
            std::cout << "Длина слова \"" << word << "\" равна " << length << std::endl;
        }
        catch (const bad_length& bl) {
            std::cout << bl.what() << " Длина была: " << bl.get_length() << ". До свидания\n";
            break;
        }
    }
    return 0;
}
