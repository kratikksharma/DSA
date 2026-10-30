
class Solution {
public:
    bool issafe(vector<string>& board, int row, int col, int n) {
        // Check vertically upward
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Check upper-left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Check upper-right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void NQueens(int row, vector<string>& board,
                 vector<vector<string>>& ans, int n, int &count) {
        if (row == n) {
            count++;
            return;
        }

        for (int col = 0; col < n; col++) {
            if (issafe(board, row, col, n)) {
                board[row][col] = 'Q';

                NQueens(row + 1, board, ans, n, count);

                board[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        vector<vector<string>> ans;
        int count = 0;
        NQueens(0, board, ans, n, count);

        return count;
    }
    
};