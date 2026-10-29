#include <iostream> 
using namespace std;
int sum_of_digits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sum_of_digits(n / 10);
}
int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive number";
    }
    else {
        cout << "Sum of digits in " << num
            << " is " << sum_of_digits(num);
    }

    return 0;
}
