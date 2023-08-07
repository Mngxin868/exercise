class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> str;
        vector<string> ans;
        int s = text.size();
        //分成一个一个的单词
        for(int i=0;i<s;i++){
            string temp;
            for(;i<s&&text[i]!=' ';i++){
                temp.push_back(text[i]);
            }
            str.push_back(temp);
        }
        for(int i=0;i<str.size()-2;i++){
            if(str[i]==first&&str[i+1]==second)
                ans.push_back(str[i+2]);
        }
        return ans;
    }
};
