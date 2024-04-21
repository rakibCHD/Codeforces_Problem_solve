#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    string result;

    for (int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b == c)
            result += '+';
        else
            result += '-';
    }

    for (int i = 0; i < t; i++)
        cout << result[i] << endl;

    return 0;
}
 
 