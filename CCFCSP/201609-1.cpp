#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
	int n, bef, aft, max = 0;
	cin >> n;
	cin >> bef;
	for (int i = 1; i < n; i++) {
		cin >> aft;
		if (max < (abs)(bef - aft)) 
			max = (abs)(bef - aft);
		bef = aft;
	}
	cout << max;
	return 0;
}
