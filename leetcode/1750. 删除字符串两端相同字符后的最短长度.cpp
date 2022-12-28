class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(s[i]==s[j]&&i<j){
            char ch=s[i];
            //"="一并去掉j位置
            while(s[i]==ch&&i<=j) i++;
            while(s[j]==ch&&i<j) j--;
        }
        return j-i+1;
    }
};
