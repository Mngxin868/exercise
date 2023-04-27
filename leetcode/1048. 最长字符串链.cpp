//倒过来在长串上删除字符会比较好
class Solution {
public:
    static bool cmp(string a, string b){
        return a.size()<b.size();
    }

    string Substr(string a, int j){
        string ans;
        for(int i=0;i<j;i++) ans.push_back(a[i]);
        for(int i=j+1;i<a.size();i++) ans.push_back(a[i]);
        return ans;
    }

    int longestStrChain(vector<string>& words) {
        int n = words.size();
        vector<int> ans(n);
        sort(words.begin(),words.end(),cmp);
        for(int i=0;i<n;i++) ans[i]=1;
        for(int i=n-1;i>0;i--){
            for(int j=0;j<words[i].size();j++){
                string temp = Substr(words[i],j);
                for(int k=0;k<i;k++){
                    if(temp==words[k]) ans[k] = max(ans[k],ans[i]+1);
                }
            }
        }
        int maxn = 0;
        for(int i=0;i<n;i++){
            if(maxn<ans[i]) maxn = ans[i];
        }
        return maxn;
    }
};
