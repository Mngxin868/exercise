class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for(int i=0;i<chalk.size();i++){
            sum += chalk[i];
        }
        sum = k%sum;
        for(int i=0;i<chalk.size();i++){
            if(sum<chalk[i]) return i;
            sum -= chalk[i];
        }
        return 0;
    }
};
