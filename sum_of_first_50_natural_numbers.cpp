/*
Program Title: Sum of First 50 Natural Numbers
Name: Muhammad Tabish
Registration Number: l1f25bscs0001
Assignment Number: 1
*/
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 1; i <= 50; i++) {
        sum += i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
