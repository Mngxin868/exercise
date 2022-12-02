//暴力破解
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.size();i++){
            int temp=0;
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    temp+=(abs)(i-j);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

//优化为O（n)
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size());
        int temp=0,num=0;
        for(int i=1;i<boxes.size();i++){
            if(boxes[i-1]=='1') num++;
            ans[i]=temp+num;
            temp+=num;
        }
        temp=0;num=0;
        for(int i=boxes.size()-2;i>=0;i--){
            if(boxes[i+1]=='1') num++;
            ans[i]+=temp+num;
            temp+=num;
        }
        return ans;
    }
};
