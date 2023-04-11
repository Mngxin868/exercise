//解题关键是思路
//考虑一次指令，若最终位置回到原位，那么成环，若不在原位，但方向与执行指令前不一致，四次指令后便能一致，也就是一定能够回归原位（重点）
//那么不能回归原位的仅有一种情况，执行一次指令不在原位且与初始方向一致
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int way[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
        int x = 0, y = 0, goal = 0;
        for(int i=0;i<instructions.size();i++){
            if(instructions[i] == 'G'){
                x += way[goal][0];
                y += way[goal][1];
            }
            else if(instructions[i] == 'L')
                goal = (goal - 1 + 4)%4;
            else
                goal = (goal + 1)%4;
        }
        if(x==0 && y==0) return true;
        if(goal == 0) return false;
        return true;
    }
};
