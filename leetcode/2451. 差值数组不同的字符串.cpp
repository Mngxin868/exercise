class Solution {
public:
    string oddString(vector<string>& words) {
        int m = words.size();
        vector<int> arr1;
        int ans = 1, res = 0;
        string odd;
        int n = words[0].size();
        for(int j=1;j<n;j++){
            arr1.push_back(words[0][j]-words[0][j-1]);
        }
        for(int i=1;i<m;i++){
            vector<int> arr2;
            for(int j=1;j<n;j++){
                arr2.push_back(words[i][j]-words[i][j-1]);
            }
            if(arr1 == arr2) ans++;
            else{
                res++;
                odd = words[i];
            }
        }
        if(ans==1) return words[0];
        else return odd;
    }
};
