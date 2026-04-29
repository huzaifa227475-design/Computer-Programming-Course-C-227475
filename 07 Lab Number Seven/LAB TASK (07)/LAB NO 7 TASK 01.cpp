// Name: Muhammad Huzaifa
// Registration Number: BF25NWELE0742
// Department: Electrical
// Section: Power

#include <iostream>
using namespace std;

int main() {

    int numbers[5] = {10, 20, 30, 40, 50};   // yeh integer array hai jiska size 5 hai aur is mein 10,20,30,40,50 values store ki gayi hain

    cout << "Array Elements are:" << endl;   // yeh line screen par aik heading print karti hai taake user ko pata ho ke neeche kya show hoga

    for(int i = 0; i < 5; i++) {             // yeh for loop 0 se 4 tak chalega aur array ke har index ko access karega
        cout << numbers[i] << endl;          // yeh har index ki value ek ek karke screen par print karta hai
    }

    return 0;                                // yeh batata hai ke program successfully end ho gaya
}
