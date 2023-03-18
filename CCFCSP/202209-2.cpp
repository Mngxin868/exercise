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
