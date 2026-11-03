class Solution {
public:
    bool rowchecker(vector<vector<char>>& board){
        for(int i = 0; i < 9; i++){
            unordered_map<char,int> hashmap;
            for(int j = 0; j < 9; j++){
                if(!(board[i][j] == '.')){
                    hashmap[board[i][j]]++;
                    if(hashmap[board[i][j]] > 1){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool columnchecker(vector<vector<char>>& board){
        for(int i = 0; i < 9; i++){
            unordered_map<char,int> hashmap;
            for(int j = 0; j < 9; j++){
                if(!(board[j][i] == '.')){
                    hashmap[board[j][i]]++;
                    if(hashmap[board[j][i]] > 1){
                        return false;
                    }
                }
            }
        }
        return true;
    }
    bool gridchecker(vector<vector<char>>& board){
    for(int row_offset = 0; row_offset < 9; row_offset += 3){
        for(int col_offset = 0; col_offset < 9; col_offset += 3){
            unordered_map<char, int> hashmap;
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    char current = board[row_offset + i][col_offset + j];
                    if(current != '.'){
                        hashmap[current]++;
                        if(hashmap[current] > 1) return false;
                    }
                }
            }
            
        }
    }
    return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        return rowchecker(board) && columnchecker(board) && gridchecker(board);
    }
};
