#include <iostream>
#include <string>
#include <cctype> // для функции tolower

using namespace std;

// Функция проверки, является ли строка палиндромом
bool isPalindrome(const string& str) {
    int left = 0;                    // Указатель на начало строки
    int right = str.length() - 1;   // Указатель на конец строки
    
    while (left < right) {
        // Пропускаем символы, не являющиеся буквами или цифрами (опционально)
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        
        // Сравниваем символы в нижнем регистре (регистронезависимо)
        if (tolower(str[left]) != tolower(str[right])) {
            return false; // Если символы не совпадают - не палиндром
        }
        
        left++;  // Двигаем левый указатель вправо
        right--; // Двигаем правый указатель влево
    }
    
    return true; // Все символы совпали - строка палиндром
}

int main() {
    string input;
    
    cout << "Введите строку для проверки: ";
    getline(cin, input); // Считываем всю строку с пробелами
    
    // Вызываем функцию проверки и выводим результат
    if (isPalindrome(input)) {
        cout << "Да, строка является палиндромом!" << endl;
    } else {
        cout << "Нет, строка не является палиндромом." << endl;
    }
    
    return 0;
}
// dfghjkl
