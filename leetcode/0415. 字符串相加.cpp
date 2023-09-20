class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        bool flag = false;
        int i=num1.size()-1,j=num2.size()-1;
        for(;i>=0&&j>=0;i--,j--){
            if(num1[i]-'0'+num2[j]-'0'+flag>9){
                ans.push_back(num1[i]-'0'+num2[j]-'0'+flag-10+'0');
                flag = true;
            }
            else{
                ans.push_back(num1[i]-'0'+num2[j]-'0'+flag+'0');
                flag = false;
            }
        }
        for(;i>=0;i--){
            if(num1[i]-'0'+flag>9){
                ans.push_back(num1[i]-'0'+flag-10+'0');
                flag = true;
            }
            else{
                ans.push_back(num1[i]-'0'+flag+'0');
                flag = false;
            }
        }
        for(;j>=0;j--){
            if(num2[j]-'0'+flag>9){
                ans.push_back(num2[j]-'0'+flag-10+'0');
                flag = true;
            }
            else{
                ans.push_back(num2[j]-'0'+flag+'0');
                flag = false;
            }
        }
        if(flag) ans.push_back('1');
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
