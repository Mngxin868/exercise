class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i = 0, j = 0, m = matrix.size(), n = matrix[0].size(),num = 1;
        vector<int> ans;
        ans.push_back(matrix[0][0]);
        matrix[0][0] = 101;
        while(num<n*m){
            while(j+1<n&&matrix[i][j+1]!=101){
                ans.push_back(matrix[i][j+1]);
                matrix[i][j+1] = 101;
                j++; num++;
            }
            while(i+1<m&&matrix[i+1][j]!=101){
                ans.push_back(matrix[i+1][j]);
                matrix[i+1][j] = 101;
                i++; num++;
            }
            while(j>0&&matrix[i][j-1]!=101){
                ans.push_back(matrix[i][j-1]);
                matrix[i][j-1] = 101;
                j--; num++;
            }
            while(i>0&&matrix[i-1][j]!=101){
                ans.push_back(matrix[i-1][j]);
                matrix[i-1][j] = 101;
                i--; num++;
            }
        }
        return ans;
    }
};
