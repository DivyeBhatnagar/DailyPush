#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "\nNumbers from 1 to " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        sum += i;
    }
    
    cout << "\nSum = " << sum << endl;
    
    return 0;
}
