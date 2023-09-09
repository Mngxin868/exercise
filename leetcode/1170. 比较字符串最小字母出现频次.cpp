class Solution {
public:
    int find(string str){
        int temp = 0;
        char ch = 'z';
        for(int j=0;j<str.size();j++){
            if(str[j]==ch) temp++;
            else if(str[j]<ch){
                ch = str[j];
                temp = 1;
            }
        }
        return temp;
    }

    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> ans, q, w;
        for(int i=0;i<queries.size();i++){
            q.push_back(find(queries[i]));
            //cout<<q[i]<<" ";
        }
        //cout<<endl;
        for(int i=0;i<words.size();i++){
            w.push_back(find(words[i]));
            //cout<<w[i]<<" ";
        }
        for(int i=0;i<q.size();i++){
            int temp = 0;
            for(int j=0;j<w.size();j++){
                if(q[i]<w[j]) temp++;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
