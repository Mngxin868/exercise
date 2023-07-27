//注意是变为词，相同的要提前排除
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s==t) return false;
        int arr1[27]={0},arr2[27]={0};
        for(int i=0;i<s.size();i++){
            arr1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            arr2[t[i]-'a']++;
        }
        for(int i=0;i<27;i++){
            if(arr1[i]!=arr2[i]) return false;
        }
        return true;
    }
};
