//exp10b 
//call by reference 


#include <iostream>

using namespace std;

void swap(int &x, int &y);

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "\n--- In main() before swapping ---" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    swap(a, b);

    cout << "\n--- In main() after swapping ---" << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}

void swap(int &x, int &y) {
    cout << "\n--- Inside swap() function ---" << endl;
    cout << "Received references to original values." << endl;

    int temp = x;
    x = y;
    y = temp;

    cout << "Original variables have been swapped." << endl;
}


