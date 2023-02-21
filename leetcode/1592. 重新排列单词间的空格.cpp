class Solution {
public:
    string reorderSpaces(string text) {
        int num=0,word=0;
        string ans;
        bool flag=false;
        for(int i=0;i<text.size();i++){
            if(text[i]!=' '&&!flag){    //记录单词数
                flag=true;
                word++;
            }
            if(text[i]==' '){           //记录空格数
                flag=false;
                num++;
            }
        }
        flag=false;
        if(word==1){                    //单独分析单词只有一个的情况
            for(int i=0;i<text.size();i++){
                if(text[i]!=' ') ans.push_back(text[i]);
            }
            for(int i=0;i<num;i++){
                ans.push_back(' ');
            }
            return ans;
        }
        int temp=num/(word-1);          //单词不能为一个
        int sur=num-temp*(word-1);      //尾部空格
        for(int i=0;i<text.size();i++){
            if(text[i]!=' '){           //录入单词
                ans.push_back(text[i]);
                flag=true;
            }
            if(text[i]==' '&&flag&&--word>0){   //空格时检测是否为空格开头，空格结尾
                for(int j=0;j<temp;j++)
                    ans.push_back(' ');
                flag=false;
            }
        }
        for(int i=0;i<sur;i++){         //补全长度
            ans.push_back(' ');
        }
        return ans;
    }
};
