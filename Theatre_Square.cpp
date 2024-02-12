#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    long long flags_n = (n + a - 1) / a;
    long long flags_m = (m + a - 1) / a;
    long long total_flags = flags_n * flags_m;
    cout << total_flags << endl;
    return 0;
}
