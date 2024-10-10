#include <iostream>
#include <string>
using namespace std;

int main() {
    int n,x=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string statement;
        cin >> statement;

        if (statement[0] == '+' && statement[1] == '+') {
            ++x;
        }
        else if(statement[1] == '+' && statement[2] == '+'){
            x++;
        }
        else if(statement[1] == '-' && statement[2] == '-') {
            x--;
        }
        else if(statement[0] == '-' && statement[1] == '-') {
            --x;}
        else{
            return 0;}
    }
    cout << x << endl;
    return 0;
} 
