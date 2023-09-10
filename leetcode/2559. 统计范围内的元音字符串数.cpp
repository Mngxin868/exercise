class Solution {
public:
    bool func(string str){
        char ch = str[str.size()-1];
        if(str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
        }
        return false;
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int> ans, temp;
        if(func(words[0])) temp.push_back(1);
        else temp.push_back(0);
        for(int i=1;i<words.size();i++){
            if(func(words[i])) temp.push_back(temp[i-1]+1);
            else temp.push_back(temp[i-1]);
        }
        for(int i=0;i<queries.size();i++){
            if(queries[i][0]==0)
                ans.push_back(temp[queries[i][1]]);
            else 
                ans.push_back(temp[queries[i][1]]-temp[queries[i][0]-1]);
        }
        return ans;
    }
};
