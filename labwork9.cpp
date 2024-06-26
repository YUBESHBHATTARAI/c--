#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

// Function prototype
void demonstrateStatic();
 int externVar; // Declaration of extern variable

int main() {
    // Local variable
    int localVar = 5;

    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl;

    // Demonstrate static variable
    demonstrateStatic();
    demonstrateStatic(); // Calling again to see the static behavior

    // Extern variable
    cout << "Extern Variable: " << externVar << endl;

    return 0;
}

// Function demonstrating static variable
void demonstrateStatic() {
    static int staticVar = 0; // Static variable
    staticVar++;
    cout << "Static Variable: " << staticVar << endl;
}
