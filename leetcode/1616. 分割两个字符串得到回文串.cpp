class Solution {
public:
    bool checkstr(string str,int left,int right){
        for(;left<right;left++,right--){
            if(str[left]!=str[right]) return false;
        }
        return true;
    }

    bool checkstrs(string a,string b){
        int i=0,j=a.size()-1;
        for(;i<j;i++,j--){
            if(a[i]!=b[j]) break;
        }
        return checkstr(a,i,j)||checkstr(b,i,j);
    }
    bool checkPalindromeFormation(string a, string b) {
        return checkstrs(a,b)||checkstrs(b,a);
    }
};
