#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9], cols[9], boxes[9];

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char num = board[i][j];
                if (num == '.') continue;

                int boxIndex = (i / 3) * 3 + (j / 3);

                if (rows[i].count(num) || cols[j].count(num) || boxes[boxIndex].count(num))
                    return false;

                rows[i].insert(num);
                cols[j].insert(num);
                boxes[boxIndex].insert(num);
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<vector<char>> board(9, vector<char>(9));

    cout << "Enter the Sudoku board (9x9) row by row, using '.' for empty cells:\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> board[i][j];
        }
    }

    if (sol.isValidSudoku(board))
        cout << "The Sudoku board is valid.\n";
    else
        cout << "The Sudoku board is not valid.\n";

    return 0;
}
