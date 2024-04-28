#include <iostream>

using namespace std;

long long findNumber(long long n, long long k) {
    if (k <= (n + 1) / 2) {
        return 2 * k - 1;
    } else {
        return 2 * (k - (n + 1) / 2);
    }
}

int main() {
    long long n, k;
    cin >> n >> k;

    cout << findNumber(n, k) << endl;

    return 0;
}
    