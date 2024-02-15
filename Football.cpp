#include <iostream>
#include <string>

using namespace std;

int main() {
    string players;
    cin >> players;

    bool dangerous = false;
    int count = 1;
    for (int i = 1; i < players.length(); ++i) {
        if (players[i] == players[i - 1]) {
            count++;
            if (count >= 7) {
                dangerous = true;
                break;
            }
        } else
            count = 1;
    }

    if (dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
