#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Enter number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    cout << "\nArray elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\nSum = " << sum << endl;
    cout << "Average = " << (float)sum / n << endl;
    
    return 0;
}
