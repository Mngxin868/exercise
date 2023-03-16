#include<iostream>
using namespace std;

int main(){
	int n,m;
	int p[102],t[102],ans[102];
	bool flag=true;        //标记能否在规定时间前完成
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>p[i];
	}
	for(int i=0;i<m;i++){
		cin>>t[i];
	}
	for(int i=0;i<m;i++){
		if(p[i]==0) ans[i]=1;   //没有优先训练项目可在第一天直接训练
		else ans[i]=t[p[i]-1]+ans[p[i]-1];  //有优先项目要在后面开始训练
		if(ans[i]+t[i]-1>n) flag=false;     //完成第i项时是否超时
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<" ";
	}
	if(flag){
		cout<<endl;
		for(int i=0;i<m;i++){
			ans[i]=n;
		}
		for(int i=m-1;i>=0;i--){  //倒序，因为优先项目必定在本项目之前
			if(ans[i]>n-t[i]+1) ans[i]=n-t[i]+1;    //若当前时间大于完成项目训练时间则修改
			if(p[i]!=0){
				if(ans[p[i]-1]>ans[i]-t[p[i]-1])      //放在后续修改使其不是最小情况
					ans[p[i]-1]=ans[i]-t[p[i]-1];
			}
		}
		for(int i=0;i<m;i++){
			cout<<ans[i]<<" ";
		}
	}
	return 0;
}
