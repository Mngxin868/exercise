class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        if(nums.size()<3) return nums;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) even.push_back(nums[i]);
            else odd.push_back(nums[i]);
        }
        sort(odd.begin(),odd.end(),greater<int>());
        sort(even.begin(),even.end());
        int j=0;
        for(int i=0;i<nums.size();i+=2){
            nums[i]=even[j++];
        }
        j=0;
        for(int i=1;i<nums.size();i+=2){
            nums[i]=odd[j++];
        }
        return nums;
    }
};
