
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {};
        bool col[9][9] = {};
        bool box[9][9] = {};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.') {
                    continue;
                }

                int num = board[i][j] - '1';

                // Find the 3x3 box index
                int boxIndex = (i / 3) * 3 + (j / 3);

                // Check for duplicates
                if (row[i][num] ||
                    col[j][num] ||
                    box[boxIndex][num]) {
                    return false;
                }

                // Mark digit as seen
                row[i][num] = true;
                col[j][num] = true;
                box[boxIndex][num] = true;
            }
        }

        return true;
    }
};
