//顺序数组，二分查找
class Solution {
public:
    bool search(int i, vector<int>& numbers, int target, int& k){
        int left = i+1, right = numbers.size()-1;
        while(left<=right){
            int mid = (left + right)/2;
            if(numbers[mid]==target){
                k = mid;
                return true;
            }
            else if(numbers[mid]<target) left = mid + 1;
            else right = mid - 1;
        }
        return false;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int k;
        for(int i=0;i<numbers.size();i++){
            if(search(i,numbers,target-numbers[i],k)){
                ans[0] = i;
                ans[1] = k;
            }
        }
        return ans;
    }
};
