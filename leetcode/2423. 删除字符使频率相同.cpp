//数据量不大，蛮力法
class Solution {
public:
    bool equalFrequency(string word) {
        int arr[30] = {0};
        int ans = 0;
        for(int i=0;i<word.size();i++){
            ans = 0;
            for(int j=0;j<30;j++) arr[j]=0;
            for(int j=0;j<i;j++){
                arr[word[j]-'a']++;
            }
            for(int j=i+1;j<word.size();j++){
                arr[word[j]-'a']++;
            }
            int j=0;
            for(;j<30;j++){
                if(arr[j]==0) continue;
                if(ans==0) ans = arr[j];
                if(ans!=arr[j]) break;
            }
            if(j==30) return true;
        }
        return false;
    }
};
