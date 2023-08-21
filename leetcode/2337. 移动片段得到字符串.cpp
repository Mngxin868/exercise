class Solution {
public:
    bool canChange(string start, string target) {
        vector<int> sl,sr,tl,tr;
        string s,t;
        for(int i=0;i<start.size();i++){
            if(start[i]=='L'){
                sl.push_back(i);
                s.push_back('L');
            }
            if(start[i]=='R'){
                sr.push_back(i);
                s.push_back('R');
            }
            if(target[i]=='L'){
                tl.push_back(i);
                t.push_back('L');
            }
            if(target[i]=='R'){
                tr.push_back(i);
                t.push_back('R');
            }
        }
        if(sl.size()!=tl.size()||sr.size()!=tr.size()||s!=t)
            return false;
        for(int i=0;i<sl.size();i++){
            if(tl[i]>sl[i]) return false;
        }
        for(int i=0;i<sr.size();i++){
            if(tr[i]<sr[i]) return false;
        }
        return true;
    }
};
