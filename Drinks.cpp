#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> percentages(n);
    for (int i = 0; i < n; ++i) {
        cin >> percentages[i];
    }

    double total_volume = 0;
    for (int i = 0; i < n; ++i) {
        total_volume += percentages[i] / 100.0;
    }

    double cocktail_percentage = (total_volume / n) * 100;

    cout << setprecision(10) << cocktail_percentage << endl;

    return 0;
} 
    
