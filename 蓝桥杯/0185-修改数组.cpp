//获得80%，超时了
#include <iostream>
using namespace std;

int a[100001];
int fa[1000001]={0};

int finds(int x){
  return x == fa[x] ? x : (fa[x] = finds(fa[x]));
}

void merge(int x,int y){
  fa[finds(y)] = finds(x);
}

int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){   //初始化
    fa[a[i]]=a[i];
  }
  for(int i=1;i<n;i++){
    if(fa[a[i]]!=a[0])       //若ai的父节点不是a0,代表ai非重复
      //merge(a[0],a[i]);    //选取a0作为ai的父节点
      fa[a[i]]=a[0];
    else{                    //ai与a0集合中的元素重复
      while(fa[++a[i]]==a[0]);
      fa[a[i]]=a[0];
    }
  }
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}

//优化，去掉二重循环
#include <iostream>
using namespace std;

int a[100001];
int fa[1000001]={0};

int finds(int x){
  return x == fa[x] ? x : (fa[x] = finds(fa[x]));
}

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  for(int i=0;i<1000001;i++){
    fa[i]=i;              //按序初始化
  }
  for(int i=1;i<=n;i++){
    int p=finds(a[i]);    //找ai的根为多少
    a[i]=p;               //将ai设为对应的根，此时的根为其应该的值，原因见下
    fa[p]=p+1;            //核心，p位置的父节点为p+1,那么下一次找p位置就会去找p+1位置，符合题目不断修改加一
  }
  for(int i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
