#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char grid[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }

        int totalPoints = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int ring = min(min(i, 9 - i), min(j, 9 - j));
                    totalPoints += (ring + 1);
                }
            }
        }
        cout << totalPoints << endl;
    }

    return 0;
}
