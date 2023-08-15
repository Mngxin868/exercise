//栈模拟
class Solution {
public:
    bool isValid(string s) {
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                temp.push_back(s[i]);
            else{
                if(temp.size()==0) return false;
                if(s[i]==')'&&temp[temp.size()-1]=='(')
                    temp.pop_back();
                else if(s[i]==']'&&temp[temp.size()-1]=='[')
                    temp.pop_back();
                else if(s[i]=='}'&&temp[temp.size()-1]=='{')
                    temp.pop_back();
                else return false;
            }
        }
        if(temp.size()!=0) return false;
        return true;
    }
};
