#include<iostream>
using namespace std;

int arr[1002] = { 0 };

int main() {
	int n, temp, max = 0, maxid = 0, num = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		if (arr[temp] == 0) {
			num++;
		}
		arr[temp]++;
		if (max < temp) max = temp;
	}
	temp = max;
	for (int j = 0; j < num; j++) {
		max = 0;
		for (int i = 1; i <= temp; i++) {
			if (max < arr[i]) {
				max = arr[i];
				maxid = i;
			}
		}
		arr[maxid] = 0;
		cout << maxid << " " << max << endl;
	}
	return 0;
}
