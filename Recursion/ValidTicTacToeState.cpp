class Solution {
public:
    bool validTicTacToe(vector<string>& board) {
        int xCount = 0, oCount = 0;
        
        for (auto row : board)
            for (auto ch : row)
                if (ch != ' ')
                    ch == 'X' ? xCount++ : oCount++;
        
        if (oCount > xCount or xCount - oCount > 1)
            return false;
        
        if (xCount >= 3)
            if (playerWins(board, 'X') and xCount - 1 != oCount)
                return false;
        
        if (oCount >= 3)
            if (playerWins(board, 'O') and oCount != xCount)
                return false;
        
        return true;
    }
    
    bool playerWins(vector<string>& board, char ch) {
        // check row wise
        for (int i = 0; i < 3; i++)
            if (board[i][0] == ch and board[i][1] == ch and board[i][2] == ch)
                return true;
        
        // check column wise
        for (int i = 0; i < 3; i++)
            if (board[0][i] == ch and board[1][i] == ch and board[2][i] == ch)
                return true;
        
        // check diagnal
        if (board[0][0] == ch and board[1][1] == ch and board[2][2] == ch)
            return true;
            
        // check anti-diagnal
        if (board[0][2] == ch and board[1][1] == ch and board[2][0] == ch)
            return true;            
        
        return false;
    }
};

//LeetCode Link: https://leetcode.com/problems/valid-tic-tac-toe-state/
