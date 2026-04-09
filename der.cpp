#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

int main() {
    std::string text;
    
    std::cout << "Enter string: ";
    std::getline(std::cin, text);
    
    // Удаляем все знаки препинания и служебные символы, кроме пробела
    text.erase(std::remove_if(text.begin(), text.end(), [](char c) {
        return std::ispunct(static_cast<unsigned char>(c)) || 
               (std::iscntrl(static_cast<unsigned char>(c)) && c != ' ');
    }), text.end());
    
    std::cout << "Result: " << text << std::endl;//вывод
    //что то
    
    
    return 0;
}