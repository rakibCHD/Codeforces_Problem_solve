#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string hello = "hello";
    int j = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == hello[j]) {
            ++j;
        }
        if (j == hello.length()) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl; 
    return 0;
} 
  
    
 
 