#include "iostream"
#include "cmath"

using namespace std;

int zeroCout = 0;

long numReverser(long x){
    if (x == 0) return 0;
    long reverse = 0, count = 0 , temp;
    long xTemp = x;
    while(true){
        xTemp /= 10;
        if (xTemp == 0) break;
        count++;
    }
    temp = count;
    int sw = 0;
    for (int i = 0; i <= count; ++i) {
        if (sw == 0 && x % 10 == 0) zeroCout++;
        else sw = 1;
        reverse += x % 10 * pow(10, temp);
        temp--;
        x /= 10;
    }
    return reverse;
}

int main(){
    long number;
    cin >> number;
    long reversed = numReverser(number);
    if (zeroCout == 0) {
        cout << reversed;
    }
    else {
        for (int i = 1; i <= zeroCout; ++i) {
            cout<<"0";
            if (i == zeroCout) cout<< reversed;
        }
    }
    return 0;
}