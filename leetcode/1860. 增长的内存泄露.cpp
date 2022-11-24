class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int i=1;
        vector<int> ans;
        for(;;i++){
            if(memory1>=memory2){
                if(memory1>=i) memory1-=i;
                else break;
            }else{
                if(memory2>=i) memory2-=i;
                else break;
            }
        }
        ans.push_back(i);
        ans.push_back(memory1);
        ans.push_back(memory2);
        return ans;
    }
};
