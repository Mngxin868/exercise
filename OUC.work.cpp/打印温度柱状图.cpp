#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

void inputTemps(int temp[], int n) {
	for (int i = 0; i < n; i++)
		cin >> temp[i];
}

void displayTemps(int temp[], int n) {
	cout << "显示柱状图如下：" << endl;
	int tp = temp[0];
	for (int i = 1; i < n; i++) {
		if (tp > temp[i])
			tp = temp[i];
	}
	for (int i = 0; i < n; i++) {
		cout << setw(2) << i + 1<<" ";
		cout << setw(4) << temp[i] << " ";
		if (tp >= 0) {
			cout << "\t";
			for (int j=0; j < temp[i]; j++)
				cout << "*";
		}
		else {
			if (temp[i] < 0) {
				for (int j = 0; j < temp[i] - tp; j++)
					cout << " ";
				for (int j = 0; j < abs(temp[i]); j++)
					cout << "*";
				cout << "|";
			}
			else {
				for (int j = 0; j < abs(tp); j++)
					cout << " ";
				cout << "|";
				for (int j = 0; j < temp[i]; j++)
					cout << "*";
			}
		}
		cout<<endl;
	}
}

void displayPeaks(int temp[], int n) {
	cout << "显示峰值如下：" << endl;
	if(temp[0]>temp[1])
		cout << "Max at day 1 is " << temp[0] << endl;
	if(temp[n]>temp[n-1])
		cout << "Max at day 30 is " << temp[n] << endl;
	for (int i = 1; i < n; i++) {
		if (temp[i] > temp[i - 1] && temp[i] > temp[i + 1])
			cout << "Max at day " << i + 1 << " is " << temp[i] << endl;
	}
}

void displayFlats(int temp[], int n, int control_num) {
	if (control_num == 0)
		cout << "显示崮的长度如下：" << endl;
	int flat1 = 1, flat2 = 1, flat1_num = 0, flat2_num = 0;
	for (int i = 0; i < n; i++) {
		if (temp[i] == temp[i + 1]) {
			flat1 = flat1 + 1;
			flat1_num = temp[i];
		}
		else
			if (flat1 > flat2) {
				flat2 = flat1;
				flat2_num = flat1_num;
				flat1 = 0;
			}
	}
	if (control_num == 0)
		cout << "The length of longest flat is " << flat2 << endl;
	else
		cout << "The most frequent temperature is " << flat2_num << " and appeare " << flat2 << " times" << endl;
}

void bubble_sort(int weather[], int n) {
	int swap_num;
	for (int i = 1; i < n; i++) 
		for (int j = 0; j < n - i; j++) 
			if (weather[j] > weather[j + 1]) {
				swap_num = weather[j];
				weather[j] = weather[j + 1];
				weather[j + 1] = swap_num;
			}
}

void displayMost(int temp[], int n) {
	cout << "显示最多出现温度如下：" << endl;
	int weather[30];
	for (int i = 0; i < n; i++) {
		weather[i] = temp[i];
	}
	bubble_sort(weather, n);
	displayFlats(weather, n, 1);
}

int main() {
	int temps[30];

	inputTemps(temps, 30);
	cout << endl;
	displayTemps(temps, 30);
	cout << endl;
	displayPeaks(temps, 30);
	cout << endl;
	displayFlats(temps, 30 ,0);
	cout << endl;
	displayMost(temps, 30);
	cout << endl;

	return 0;
}
