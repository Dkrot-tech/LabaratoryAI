#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

//tested
bool isPalindrome(const string& str) {
    int left = 0;                    
    int right = str.length() - 1;   
    
    while (left < right) {
        
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        
        
        if (tolower(str[left]) != tolower(str[right])) {
            return false; 
        }
        
        left++;  
        right--; 
    }
    
    return true;
}

int main() {
    string input;
    
    cout << "Введите строку для проверки: ";
    getline(cin, input); 
    
    
    if (isPalindrome(input)) {
        cout << "Да, строка является палиндромом!" << endl;
    } else {
        cout << "Нет, строка не является палиндромом." << endl;
    }
    
    return 0;
}

