//记录每个对应的出现次数，然后分类讨论，注意本身就是回文的位于字符串中间的情况
class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int map[30][30]={0};
        int ans = 0;
        bool center = false;
        for(int i=0;i<words.size();i++){
            map[words[i][0]-'a'][words[i][1]-'a']++;
        }
        for(int i=0;i<27;i++){
            for(int j=0;j<27;j++){
                if(i==j){
                    if(!center&&map[i][j]%2==1){
                        ans += 2*map[i][j];
                        center = true;
                    }
                    else ans += 4*(map[i][j]/2);
                }
                else{
                    ans += 2*min(map[i][j],map[j][i]);
                }
            }
        }
        return ans;
    }
};
