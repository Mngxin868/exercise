class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        bool flag;
        char ch;
        for(int i=0;i<strs[0].size();i++){
            flag = true;
            ch = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(i<strs[j].size()){
                    if(strs[j][i]!=ch)
                        flag = false;
                }
                else return ans;
            }
            if(flag) ans.push_back(ch);
            else return ans;
        }
        return ans;
    }
};
