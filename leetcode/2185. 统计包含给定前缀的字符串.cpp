class Solution {
public:
    int com(string word,string pref){
        for(int i=0;i<pref.size();i++){
            if(word[i]!=pref[i]) return 0;
        }
        return 1;
    }
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        for(int i=0;i<words.size();i++){
            ans+=com(words[i],pref);
        }
        return ans;
    }
};
