class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1[0], b = nums2[0], arr[12]={0};
        for(int i=0;i<nums1.size();i++){
            a = min(a,nums1[i]);
            arr[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            b = min(b,nums2[i]);
            arr[nums2[i]]++;
        }
        for(int i=1;i<10;i++)
            if(arr[i]==2) return i;
        return min(a,b)*10 + max(a,b);
    }
};
