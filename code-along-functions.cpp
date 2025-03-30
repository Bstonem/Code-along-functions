#include <iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    return a - b;
}

int multiply(int a, int b){
    return a * b;
}

double divide(double a, double b){
    if (b !=0)
        return a / b;
    else {
        cout << "Error!  Cannot divide by zero!" << endl;
        return 0.0;
    }
}

int modulo(int a, int b){
    if(b !=0)
        return a % b;
    else {
        cout << "Error! Cannot divide by zero!" << endl;
        return 0;
    }
}


int main() {
    int x = 10;
    int y = 3;

    double a = 10.0;
    double b = 3.0;

    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << subtract(x, y) << endl;
    cout << "Multiplication: " << multiply(x, y) << endl;
    cout << "Division: " << divide(a, b) << endl;
    cout << "Modulo: " << modulo(x, y) << endl;
}

