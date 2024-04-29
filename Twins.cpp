#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> coins(n);
    int total = 0;

    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        total += coins[i];
    }

    sort(coins.begin(), coins.end(), greater<int>());

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; ++i) {
        sum += coins[i];
        ++count;

        if (sum > total - sum) {
            break;
        }
    }

    cout << count << endl;

    return 0;
} 
