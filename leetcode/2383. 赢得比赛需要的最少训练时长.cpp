class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        int num=0;     //记录次数
        for(int i=0;i<energy.size();i++){      //每回合计算差量
            if(initialExperience<=experience[i]){
                num+=(experience[i]-initialExperience+1);
                initialExperience=2*experience[i]+1;
            }
            else initialExperience+=experience[i];
            if(initialEnergy<=energy[i]){
                num+=(energy[i]-initialEnergy+1);
                initialEnergy=1;
            }
            else initialEnergy-=energy[i];
        }
        return num;
    }
};
