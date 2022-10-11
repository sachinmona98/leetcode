// Given an integer numRows, return the first numRows of Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it.

// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

// Example 2:

// Input: numRows = 1
// Output: [[1]]

vector<vector<int>> generate(int numRows) {
       
        vector<vector<int>> pascalTriangle;
        vector<int> curr = {1};
        pascalTriangle.push_back(curr);
        while(--numRows){
            vector<int> &prev = pascalTriangle[pascalTriangle.size()-1];
            curr.clear();
            curr.push_back(1);

            for(int i = 0; i < prev.size()-1; i++){
                curr.push_back(prev[i]+prev[i+1]);
            }

            curr.push_back(1);
            pascalTriangle.push_back(curr);
        }
        return pascalTriangle;
    }