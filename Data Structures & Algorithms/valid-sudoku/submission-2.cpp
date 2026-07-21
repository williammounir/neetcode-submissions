class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][10];
        bool col[9][10];
        bool boxes[9][10];

        for(int i =0;i<9;i++){
            for(int j =0;j<9;j++){
                if(board[i][j]=='.')
                    continue;
                int num = board[i][j] - '0';
                int box = (i / 3) * 3 + (j / 3);
                if(row[i][num]||col[j][num]||boxes[box][num])
                    return false;

                row[i][num] = true;
                col[j][num] = true;
                boxes[box][num] = true;
            }
        }

        return true;
    }
};
