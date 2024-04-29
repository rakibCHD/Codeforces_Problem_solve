#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int width = 0;
    for (int i = 0; i < n; ++i) {
        if (heights[i] > h) {
            width += 2;
        } else {
            width += 1;
        }
    }

    cout << width << endl;

    return 0;
}
 