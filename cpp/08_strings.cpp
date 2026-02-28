#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int vowels = 0;
    
    cout << "Enter a string: ";
    cin >> str;
    
    for (char ch : str) {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }
    
    cout << "\nLength: " << str.length() << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << str.length() - vowels << endl;
    
    return 0;
}
