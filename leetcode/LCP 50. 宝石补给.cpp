class Solution {
public:
    int giveGem(vector<int>& gem, vector<vector<int>>& operations) {
        for(int j=0;j<operations.size();j++){
            gem[operations[j][1]] += gem[operations[j][0]]/2;
            gem[operations[j][0]] -= gem[operations[j][0]]/2;
        }
        sort(gem.begin(),gem.end());
        return gem[gem.size()-1] - gem[0];
    }
};
