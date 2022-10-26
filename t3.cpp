#include "iostream"
#include "cmath"

using namespace std;

long Reverse(long number){
    long reversed = 0, copy = number;
    int count = 0;
    while (copy != 0) {
        copy /= 10;
        count++;
    }
    while (number != 0) {
        if (number % 10 == 0 && reversed == 0) cout << 0;
        else reversed += number % 10 * pow(10, count - 1);
        count--;
        number /= 10;
    }
    return reversed;
}

int main(){
    long number;
    cin >> number;
    cout << Reverse(number);
    return 0;
}
