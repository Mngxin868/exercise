class Solution {
public:
    int secondHighest(string s) {
        int max=-1,max_sec=-1;
        for(int i=0;i<s.size();i++){
            if(s[i]>47&&s[i]<58){
                if(max<s[i]-'0'){
                    max_sec=max;
                    max=s[i]-'0';
                }
                else if(max_sec<s[i]-'0'&&max!=s[i]-'0')
                    max_sec=s[i]-'0';
            }
        }
        return max_sec;
    }
};
