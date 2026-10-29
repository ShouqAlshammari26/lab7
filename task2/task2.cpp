#include <iostream> 
using namespace std;
void swapV(int num1, int num2) { int temp = num1; num1 = num2; num2 = temp; }
void swapR(int& num1, int& num2) { int temp = num1; num1 = num2; num2 = temp; }
int main() {
    int num1, num2;
    cout << "Enter two numbers:" << endl;
    cin >> num1 >> num2;

    cout << "The two numbers before any call: "
        << "num1 = " << num1
        << " num2 = " << num2 << endl;

    swapV(num1, num2);

    cout << "The two numbers after swapV call: "
        << "num1 = " << num1
        << " num2 = " << num2 << endl;

    swapR(num1, num2);

    cout << "The two numbers after swapR call: "
        << "num1 = " << num1
        << " num2 = " << num2 << endl;

    return 0;
}
