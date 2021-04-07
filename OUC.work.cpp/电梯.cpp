#include<iostream>
using namespace std;

int main() {
	int step,up=6,down=4,wait=5,total_time,temp;
	char process[100];
	do {
		total_time = 0;
		cin >> step;
		if (step == 0)
			break;
		int a[20];
		a[0] = 0;
		process[0] = '(';
		for (int i = 1; i < step+1; i++)
			cin >> a[i];
		for (int i = 0; i < step ; i++) {
			temp = (a[i + 1] - a[i]);
			if ( temp >= 0) {
				char num = temp + '0';
				total_time = total_time + up * temp + wait;
				process[6 * i + 1] = '6';
				process[6 * i + 2] = '*';
				process[6 * i + 3] = num ;
				process[6 * i + 4] = '+';
				process[6 * i + 5] = '5';
			}
			else {
				temp = -temp;
				char num = temp + '0';
				total_time = total_time + down * temp + wait;
				process[6 * i + 1] = '4';
				process[6 * i + 2] = '*';
				process[6 * i + 3] = num ;
				process[6 * i + 4] = '+';
				process[6 * i + 5] = '5';
			}
			if ((i+1) < step )
				process[6 * i + 6] = '+';
		}
		process[6 * step] = ')';
		cout << total_time << " ";
		for (int i = 0; i < 6 * step + 1; i++)
			cout << process[i];
	} while (1);
	return 0;
}
