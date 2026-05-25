#include <iostream>
#include <string>
using namespace std;

int main() {
    string board = "123456789", player = "X";
    int position, totalTurns = 0;

    while (totalTurns < 9) {
        // 1. Board dikhana
        for (int i = 0; i < 9; i++) {
            cout << board[i];
            if (i == 2 || i == 5 || i == 8) {
                cout << "\n";  
            } else {
                cout << " | "; 
            }
        }

        // 2. Input lena
        cout << "Player " << player << ", enter position (1-9): ";
        cin >> position;

        // 3. Move check karna
        if (position < 1 || position > 9 || board[position - 1] > '9') {
            cout << "Galat move! Fir se koshish karein.\n";
            continue;
        }

        // 4. Mark lagana aur turns badhana
        board[position - 1] = player[0];
        totalTurns++;

        // 5. Jeet check karna (Simple Nested-IF logic)
        for (string w : {"012", "345", "678", "036", "147", "258", "048", "246"}) {
            char a = board[w[0]-'0'], b = board[w[1]-'0'], c = board[w[2]-'0'];
            if (a == b) {
                if (b == c) {
                    cout << "Player " << player << " wins!\n"; 
                    return 0;
                }
            }
        }

        // 6. Player badalna
        if (player == "X") {
            player = "O";
        } else {
            player = "X";
        }
    }

    cout << "Game Draw ho gaya!\n";
    return 0;
}
