class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        char ch = 'a';
        int num = 0;
        int left, right;
        for(int i=0;num<s.size()/2;i++){
            left = -1;
            right = -1;
            for(int j=0;j<s.size();j++){
                if(s[j]==ch&&left==-1) left = j;
                if(s[j]==ch) right = j;
            }
            if(left==-1&&right==-1){
                ch++;
                continue;
            }
            if(distance[i]!=right-left-1) return false;
            ch++;
            num++;
        }
        return true;
    }
};
