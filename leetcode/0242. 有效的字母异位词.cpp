class Solution {
public:
    bool isAnagram(string s, string t) {
        int arrs[27] = {0}, arrt[27] = {0};
        for(int i=0;i<s.size();i++){
            arrs[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            arrt[t[i]-'a']++;
        }
        for(int i=0;i<27;i++){
            if(arrs[i]!=arrt[i]) return false;
        }
        return true;
    }
};
