//纯模拟
class Solution {
public:
    bool check(vector<int> num, int l, int r){
        if(r-l==1) return true;
        sort(num.begin(),num.end());
        int key=num[1]-num[0];
        for(int i=2;i<=r-l;i++){
            if(num[i]-num[i-1]!=key) return false;
        }
        return true;
    }

    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        vector<int> temp;
        for(int i=0;i<l.size();i++){
            temp.clear();
            for(int j=l[i];j<=r[i];j++){
                temp.push_back(nums[j]);
            }
            ans.push_back(check(temp,l[i],r[i]));
        }
        return ans;
    }
};
