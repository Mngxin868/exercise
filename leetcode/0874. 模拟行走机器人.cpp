//以下方法会在最后一个样例中超时，考虑采用哈希表提高查询效率
class Solution {
public:
    void move(int& x, int& y, int step, int ahead, vector<vector<int>>& obstacles){
        bool flag = false;
        if(ahead == 0){
            for(int i=0;i<obstacles.size();i++)
                if(obstacles[i][0] == x)
                    if(y<obstacles[i][1]&&y+step>=obstacles[i][1]){
                        y = obstacles[i][1]-1;
                        flag = true;
                    }
            if(!flag) y = y+step;
        }
        if(ahead == 2){
            for(int i=0;i<obstacles.size();i++)
                if(obstacles[i][0] == x)
                    if(y>obstacles[i][1]&&y-step<=obstacles[i][1]){
                        y = obstacles[i][1]+1;
                        flag = true;
                    }
            if(!flag) y = y-step;
        }
        if(ahead == 1){
            for(int i=0;i<obstacles.size();i++)
                if(obstacles[i][1] == y)
                    if(x<obstacles[i][0]&&x+step>=obstacles[i][0]){
                        x = obstacles[i][0]-1;
                        flag = true;
                    }
            if(!flag) x = x+step;
        }
        if(ahead == 3){
            for(int i=0;i<obstacles.size();i++)
                if(obstacles[i][1] == y)
                    if(x>obstacles[i][0]&&x-step<=obstacles[i][0]){
                        x = obstacles[i][0]+1;
                        flag = true;
                    }
            if(!flag) x = x-step;
        }
    }

    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int max = 0;
        //0:北方,1:东方,2:南方,3:西方
        int x = 0, y = 0, ahead = 0;
        for(int i=0;i<commands.size();i++){
            if(commands[i]>0) move(x,y,commands[i],ahead,obstacles);
            if(commands[i]==-1) ahead = (ahead+1)%4;
            if(commands[i]==-2) ahead = (ahead-1+4)%4;
            if(x*x+y*y>max) max = x*x+y*y;
        }
        return max;
    }
};


//哈希表改进
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int dirs[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
        unordered_set<long> us;
        for(auto &v:obstacles)
            us.insert((v[0]+30000)*60001l+v[1]+30000);
        int x = 0, y = 0;
        int d = 0;
        int ans = 0;
        for(int a:commands)
        {
            if(a==-2)
                d = (d+3)%4;
            else if(a==-1)
                d = (d+1)%4;
            else
            {
                for(int i = 1; i <= a; i++)
                {
                    if(us.count((x+dirs[d][0]+30000)*60001l+y+dirs[d][1]+30000))
                        break;
                    x += dirs[d][0];
                    y += dirs[d][1];
                    ans = max(ans, x*x+y*y);
                }
            }
        }
        return ans;
    }
};
