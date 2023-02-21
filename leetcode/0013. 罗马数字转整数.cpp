class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='M') ans+=1000;
            if(s[i]=='D') ans+=500;
            if(s[i]=='C'&&s[i+1]=='M'){
                ans+=900;i++;continue;
            }
            if(s[i]=='C'&&s[i+1]=='D'){
                ans+=400;i++;continue;
            }
            if(s[i]=='C') ans+=100;
            if(s[i]=='L') ans+=50;
            if(s[i]=='X'&&s[i+1]=='C'){
                ans+=90;i++;continue;
            }
            if(s[i]=='X'&&s[i+1]=='L'){
                ans+=40;i++;continue;
            }
            if(s[i]=='X') ans+=10;
            if(s[i]=='I'&&s[i+1]=='X'){
                ans+=9;i++;continue;
            }
            if(s[i]=='I'&&s[i+1]=='V'){
                ans+=4;i++;continue;
            }
            if(s[i]=='V') ans+=5;
            if(s[i]=='I') ans+=1;
        }
        return ans;
    }
};
