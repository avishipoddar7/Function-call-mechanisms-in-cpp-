/// call by reference and call by value 
//Exp10 a
// call by value 

#include <iostream>

using namespace std;

void swap(int x, int y);

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "--- In main() before swapping ---" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    swap(a, b);

    cout << "\n--- In main() after swapping ---" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}

void swap(int x, int y) {
    cout << "\n--- Inside swap() function ---" << endl;
    cout << "Received x: " << x << ", y: " << y << endl;

    int temp = x;
    x = y;
    y = temp;

    cout << "Swapped values are x: " << x << ", y: " << y << endl;
}
