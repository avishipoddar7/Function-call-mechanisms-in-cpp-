//exp10d 
//string reversal using function and call by reference 

#include <iostream>
using namespace std;

char* reverseString(char* str) {
    int n = 0;
    while (str[n] != '\0') {
        n++;
    }

    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    return str;
}

int main() {
    const int MAX_SIZE = 100;
    char userInput[MAX_SIZE];

    cout << "Enter a string to reverse: ";
    cin.getline(userInput, MAX_SIZE);

    cout << "\nOriginal string: " << userInput << endl;

    reverseString(userInput);

    cout << "Reversed string: " << userInput << endl;

    return 0;
}

/*
  Output 

Enter a string to reverse: My jacket is green.

Original string: My jacket is green.
Reversed string: .neerg si tekcaj yM

*/