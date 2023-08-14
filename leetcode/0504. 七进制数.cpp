class Solution {
public:
    string convertToBase7(int num) {
        string ans;
        bool flag = false;
        if(num<0){
            num = -num;
            flag = true;
        }
        if(num==0) return "0";
        while(num>0){
            ans.insert(0,1,num%7+'0');
            num /= 7;
        }
        if(flag) ans.insert(0,1,'-');
        return ans;
    }
};
