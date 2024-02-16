#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    bool is_reverse = true;

    if (s.length() != t.length())
        is_reverse = false;
    else {
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != t[s.length() - i - 1])
            {
                is_reverse = false;
                break;
            }
        }
    }

    if (is_reverse) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
