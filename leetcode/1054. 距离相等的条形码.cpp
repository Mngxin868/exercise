//下面是一种会超时的方法，较为易懂，提取数组中每一项，按要求插入新数组中
class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        vector<int> ans;
        ans.push_back(barcodes[0]);
        for(int i=1;i<barcodes.size();i++){
            for(int j=0;j<ans.size();j++){
                if(ans[j]!=barcodes[i]&&j==0){    //判断是否可以插在头部
                    ans.insert(ans.begin(),barcodes[i]);
                    break;
                }
                else if(ans[j]!=barcodes[i]){
                    if(j+1==ans.size()){          //插在尾部
                        ans.push_back(barcodes[i]);
                        break;
                    }
                    else if(ans[j-1]!=barcodes[i]){
                        ans.insert(ans.begin()+j,barcodes[i]);
                        break;
                    }
                }
                //不能插入，则要将该项放到后面再进行
                else if(j+1==ans.size()) barcodes.push_back(barcodes[i]);
            }
        }
        return ans;
    }
};


//方法是记录每个数出现的次数，然后按照次数从大到小排序（重点），然后间隔插入
class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        map<int,int> mymap;
        for(int i=0;i<barcodes.size();i++){
            if(mymap.find(barcodes[i])==mymap.end())
                mymap.insert({barcodes[i],1});
            else mymap[barcodes[i]]++;
        }
        vector<pair<int,int>> ans;
        for(auto it = mymap.begin();it!=mymap.end();it++){
            ans.push_back({it->first,it->second});
        }
        sort(ans.begin(),ans.end(),[](pair<int,int> l, pair<int,int> r){
            return l.second > r.second;
        });
        auto it = ans.begin();
        for(int i=0;i<barcodes.size();i+=2){
            barcodes[i] = it->first;
            it->second--;
            if(it->second==0) it++;
        }
        for(int i=1;i<barcodes.size();i+=2){
            barcodes[i] = it->first;
            it->second--;
            if(it->second==0) it++;
        }
        return barcodes;
    }
};
