class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i = 0, j = 0;
        int n = word1.size();
        int m = word2.size();
        while(i<n&&j<m){
            ans.push_back(word1[i++]);
            ans.push_back(word2[j++]);
        }
        for(;i<n;i++){
            ans.push_back(word1[i]);
        }
        for(;j<m;j++){
            ans.push_back(word2[j]);
        }
        return ans;
    }
};
