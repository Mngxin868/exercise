class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> ans;
        for(int i=0;i<names.size();i++){
            ans.insert({heights[i],names[i]});
        }
        sort(heights.rbegin(),heights.rend());
        for(int i=0;i<names.size();i++){
            names[i]=ans[heights[i]];
        }
        return names;
    }
};

//考虑到map本身就用排序功能，所以可以优化代码如下:
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string,greater<int>> ans;
        for(int i=0;i<names.size();i++){
            ans.insert({heights[i],names[i]});
        }
        names.clear();
        for(auto it=ans.begin();it!=ans.end();it++){
            names.push_back(it->second);
        }
        return names;
    }
};
