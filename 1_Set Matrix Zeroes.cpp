// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// You must do it in place. 

// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 
 void setZeroes(vector<vector<int>>& matrix) {

        bool isFirstCol = false;
        for(int i = 0; i < matrix.size(); i++){
            if(matrix[i][0] == 0){
                isFirstCol = true;
                break;
            }
        }

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }

        for(int i = matrix.size()-1; i >= 0; i--){
            for(int j = matrix[0].size()-1; j > 0; j--){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
            if(isFirstCol)
            matrix[i][0] = 0;
        }
        
    }