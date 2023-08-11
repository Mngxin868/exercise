class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int money1 = 0, money2 = 0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) money1++;
            else if(bills[i]==10){
                money1--; money2++;
            }
            else if(bills[i]==20){
                if(money2>0){
                    money1--; money2--;
                }
                else{
                    money1-=3;
                }
            }
            if(money1<0||money2<0) return false;
        }
        return true;
    }
};
