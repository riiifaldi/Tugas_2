#include <iostream>
using namespace std;

int main() {
    cout << sizeof(int) << endl;     // Output: 4
    cout << sizeof(double) << endl;  // Output: 8
    
    // Contoh tambahan tipe data lain
    cout << "sizeof(char): " << sizeof(char) << " byte" << endl;         // 1
    cout << "sizeof(short): " << sizeof(short) << " byte" << endl;       // 2
    cout << "sizeof(long): " << sizeof(long) << " byte" << endl;         // 8
    cout << "sizeof(float): " << sizeof(float) << " byte" << endl;       // 4
    cout << "sizeof(bool): " << sizeof(bool) << " byte" << endl;         // 1
    
    return 0;
}