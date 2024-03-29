class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int p=-1;   //记录第一个逆序的位置
        for(int i=arr.size()-1;i>=1;i--){
            if(arr[i]<arr[i-1]){
                p=i-1;
                break;
            }
        }
        if(p==-1) return arr;
        for(int i=arr.size()-1;i>=1;i--){
            if(arr[i]<arr[p]&&arr[i]!=arr[i-1]){    //碰到连续的要交换最前面的一个
                int temp=arr[p];
                arr[p]=arr[i];
                arr[i]=temp;
                break;
            }
        }
        return arr;
    }
};

//第二个循环考虑逆序找，是因为第一个循环保证了在p位置后面的数都是非递减排列的，要满足“最大”就逆序找
