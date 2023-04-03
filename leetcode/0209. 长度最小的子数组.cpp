//滑动窗口
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=nums.size()+1;
        int left=0,right=0,sum=nums[left];
        for(;left<nums.size();left++){
            while(sum<target){              //窗口总数不够
                if(right+1<nums.size()){    //窗口还能右移
                    right++;                //右移
                    sum+=nums[right];       //更新窗口总值
                }
                else break;                 //无法右移则跳出   
            }
            if(sum>=target){
                if(ans>(right-left+1))      //长度最小
                    ans=right-left+1;
            }
            sum-=nums[left];                //左侧移出
        }
        if(ans==nums.size()+1)              //值没变化，表明不存在
            return 0;
        else return ans;
    }
};

//小小优化
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=nums.size()+1;
        int left=0,right=0,sum=nums[left];
        for(;left<nums.size();left++){
            while(sum<target){              //窗口总数不够
                if(right+1<nums.size()){    //窗口还能右移
                    right++;                //右移
                    sum+=nums[right];       //更新窗口总值
                }
                else{                       //后面左侧还要移出，全计算上显然也不够
                    if(ans==nums.size()+1)  //值没变化，表明不存在
                        return 0;
                    else return ans;
                }  
            }
            if(sum>=target){
                if(ans>(right-left+1))      //长度最小
                    ans=right-left+1;
            }
            sum-=nums[left];                //左侧移出
        }
        if(ans==nums.size()+1)              //值没变化，表明不存在
            return 0;
        else return ans;
    }
};

//在右侧计算到数组右边界时就可以知道结果了，但是在leetcode上提交不知道为什么更慢了。。。
