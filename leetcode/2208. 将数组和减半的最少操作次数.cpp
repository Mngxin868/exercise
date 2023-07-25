//贪心法，每次考虑当前数组中最大项，但会超时
class Solution {
public:
    int halveArray(vector<int>& nums) {
        int ans = 0;
        double sum0 = 0,sum1 = 0;
        vector<double> temp;
        temp.push_back(0);
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            sum0 += nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            sort(temp.begin(),temp.end());
            if(nums[i]>=temp[temp.size()-1]){
                sum1 += (double)nums[i]/2;
                temp.push_back((double)nums[i]/2);
            }
            else{
                sum1 += temp[temp.size()-1]/2;
                temp[temp.size()-1] /= 2;
                i++;
            }
            ans++;
            if(sum1*2>sum0) break;
        }
        return ans;
    }
};

//考虑优先队列解决超时
class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue <double> temp;
        double sum0 = 0, sum1 = 0;
        for(int i=0;i<nums.size();i++){
            temp.push(nums[i]);
            sum0 += nums[i];
        }
        int ans = 0;
        cout<<sum0<<endl;
        while(sum1*2<sum0){
            double num = temp.top()/2;
            temp.pop();
            temp.push(num);
            sum1 += num;
            ans++;
            // cout<<sum1<<" "<<ans<<endl;
        }
        return ans;
    }
};
