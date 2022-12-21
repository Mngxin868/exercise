//递归求解
class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int max_num=max(max(a,b),c);
        int min_num=min(min(a,b),c);
        int mid=a+b+c-max_num-min_num;
        if(mid==0) return 0;
        else return maximumScore(max_num-1,mid-1,min_num)+1;
    }
};

//数学规律
class Solution {
public:    
    int maximumScore(int a, int b, int c) {
        if(a+b<c)return a+b;
        if(a+c<b)return a+c;
        if(c+b<a)return b+c;
        return (a+b+c)/2;
    }
};
