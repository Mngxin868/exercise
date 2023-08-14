class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m = mat.size(), n = mat[0].size();
        for(int i=0;i<m+n;i++){
            if(i%2==0){
                for(int j=0;j<=i&&j<n;j++){
                    if(i-j<m) ans.push_back(mat[i-j][j]);
                }
            }
            else{
                for(int j=0;j<=i&&j<m;j++){
                    if(i-j<n) ans.push_back(mat[j][i-j]);
                }
            }
        }
        return ans;
    }
};
