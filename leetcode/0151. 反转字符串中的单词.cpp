class Solution {
public:
    string reverseWords(string s) {
        vector<string> temp;
        string ans;
        for(int i=0;i<s.size();i++){
            string str;
            if(s[i]!=' '){
                while(s[i]!=' '&&i<s.size()) str.push_back(s[i++]);
                temp.push_back(str);
            }
        }
        for(int i=temp.size()-1;i>=0;i--){
            for(int j=0;j<temp[i].size();j++){
                ans.push_back(temp[i][j]);
            }
            if(i!=0)
                ans.push_back(' ');
        }
        return ans;
    }
};
