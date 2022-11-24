class Solution {
public:
    bool isUnique(string astr) {
        int arr[26]={0};
        bool flag=true;
        for(int i=0;i<astr.size();i++){
            arr[astr[i]-97]++;
            if(arr[astr[i]-97]>=2){
                flag=false;
                break;
            }
        }
        return flag;
    }
};
