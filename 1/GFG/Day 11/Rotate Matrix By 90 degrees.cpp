class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Transpose the matrix
        // and then reverse every row
        int n= matrix.size(), m = matrix[0].size();
        for(int i = 0;i < n-1;i++){
            for(int j = i+1;j < n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0;i < n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};