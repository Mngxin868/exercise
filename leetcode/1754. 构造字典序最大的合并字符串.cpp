class Solution {
public:
    string largestMerge(string word1, string word2) {
        string ans;
        int i=0,j=0;
        while(i<word1.size()&&j<word2.size()){
            int k=0;
            while(i+k<word1.size()&&j+k<word2.size()&&word1[i+k]==word2[j+k])
                k++;
            if(word1[i+k]>word2[j+k]) ans.push_back(word1[i++]);
            else ans.push_back(word2[j++]);
        }
        if(i<word1.size())
            ans += word1.substr(i);
        if(j<word2.size())
            ans += word2.substr(j);
        return ans;
    }
};
