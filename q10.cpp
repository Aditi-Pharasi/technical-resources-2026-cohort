#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    cout << "Prime factors of " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
