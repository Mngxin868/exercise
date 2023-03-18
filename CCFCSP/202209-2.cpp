//动态规划

#include<iostream>
#include<algorithm>
#define N 32
#define M 300001
using namespace std;

int squre[N][M]={0};

int main(){
	int n,x,total=0,ans;
	int arr[N];
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		total+=arr[i];
	}
	ans=total;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=total;j++){
			if(arr[i]>j) squre[i][j]=squre[i-1][j];
			else squre[i][j]=max(squre[i-1][j-arr[i]]+arr[i],squre[i-1][j]);
			if(squre[i][j]>=x&&ans>squre[i][j]) ans=squre[i][j];
		}
	}
	cout<<ans;
	return 0;
} 


//递归，需要剪枝，不然会超时
#include<iostream>
using namespace std;

int arr[32],minp=31*10000,n,x;
int brr[32];   //前缀和序列

void dfs(int k,int sum){
	if(k>n||sum+brr[n]-brr[k-1]<x) return;  //当前检查点K大于n则停止，如果后续所有节点加上当前总数都无法到达X，则剪枝
	if(sum+arr[k]>=x&&sum+arr[k]<minp) minp=sum+arr[k]; //更新当前的最小值
	dfs(k+1,sum+arr[k]);  //递归选择当前这本
	dfs(k+1,sum);  //递归放弃当前这本
} 

int main(){
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		brr[i]=brr[i-1]+arr[i];	 //前缀和
	}
	dfs(1,0);
	cout<<minp;
	return 0; 
}
