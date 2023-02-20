class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        bool flag=true;
        for(int i=1;i<suits.size();i++)
            if(suits[i-1]!=suits[i]) flag=false;
        if(flag) return "Flush";
        int arr[14]={0};
        for(int i=0;i<ranks.size();i++)
            arr[ranks[i]]++;
        for(int i=1;i<14;i++)
            if(arr[i]>=3) return "Three of a Kind";
        for(int i=1;i<14;i++)
            if(arr[i]==2) return "Pair";
        return "High Card";
    }
};
