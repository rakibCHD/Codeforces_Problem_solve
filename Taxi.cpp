#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int groups[5] = {0};

    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        groups[s]++;
    }

    int taxis = groups[4] + groups[3] + (groups[2] + 1) / 2;
    groups[1] -= groups[3];
    if (groups[2] % 2 == 1)
        groups[1] -= 2;
    if (groups[1] > 0)
        taxis += (groups[1] + 3) / 4;

    cout << taxis << endl;

    return 0;
}
 