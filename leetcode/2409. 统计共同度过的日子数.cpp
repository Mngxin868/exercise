class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string arrive = max(arriveAlice,arriveBob);
        string leave = min(leaveAlice,leaveBob);
        if(leave<arrive) return 0;
        else{
            int days[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            int month1 = (arrive[0]-'0')*10+(arrive[1]-'0');
            int month2 = (leave[0]-'0')*10+(leave[1]-'0');
            int day1 = (arrive[3]-'0')*10+(arrive[4]-'0');
            int day2 = (leave[3]-'0')*10+(leave[4]-'0');
            for(int i=month1;i<month2;i++){
                day2+=days[i-1];
            }
            return day2-day1+1;
        }
    }
};
