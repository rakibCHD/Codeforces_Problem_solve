#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int even_count = 0, odd_count = 0;
    int even_index = -1, odd_index = -1;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] % 2 == 0) {
            even_count++;
            even_index = i + 1;
        } else {
            odd_count++;
            odd_index = i + 1;
        }
    }

    if (even_count == 1) {
        cout << even_index << endl;
    } else {
        cout << odd_index << endl;
    }

    return 0;
}
