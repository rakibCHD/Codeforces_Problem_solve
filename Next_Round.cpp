#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int scores[n];

    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int advance_count = 0;
    int k_score = scores[k - 1];

    for (int i = 0; i < n; ++i) {
        if (scores[i] >= k_score && scores[i] > 0) {
            advance_count++;
        } else {
            break;
        }
    }

    cout << advance_count << endl;

    return 0;
}
