//蛮力法
class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++){
            int j=0;
            for(int k=i;j<needle.size();j++,k++){
                if(haystack[k]!=needle[j]) break;
            }
            if(j==needle.size()) return i;
        }
        return -1;
    }
};
