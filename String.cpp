#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
    string input, ss, result;
    cin >> input;
    if (input.size() <= 100)
    {
        result+='.';
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == 'A' || input[i] == 'a' || input[i] == 'e' || input[i] == 'E' || input[i] == 'i' || input[i] == 'I' ||
                input[i] == 'o' || input[i] == 'O' || input[i] == 'u' || input[i] == 'U' || input[i] == 'y' || input[i] == 'Y')
                input[i] = ' ';
            else
                input[i] = tolower(input[i]);
        }
        input.erase(remove(input.begin(), input.end(), ' '), input.end());
        for (int i = 0; i < input.size(); i++) {
            result += input[i];
            if (i != input.size() - 1)
                result += '.';
        }
        cout << result << endl;
    } else {
        exit(0);
    }

    return 0;
}
