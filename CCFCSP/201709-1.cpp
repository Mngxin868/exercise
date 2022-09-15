#include<iostream>
using namespace std;

int main() {
	int N, ans = 0;
	cin >> N;
	ans += (N / 50) * 7;
	N = N % 50;
	ans += (N / 30) * 4;
	N = N % 30;
	ans += (N / 10);
	cout << ans;
	return 0;
}
