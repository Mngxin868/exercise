#include<iostream>
#include<string.h>
//#pragma warning(disable:4996)//vs弃用strcpy
using namespace std;

char fine_arr[6][10];
int count_num = 0;

int decide(char slider[], int num) {
	int right_times = 0;
	for (int i = 0; i < num + 1; i++) {
		if (right_times == num)
			return 1;
		if (slider[i] == 'W')
			right_times += 1;
		if (slider[i] == 'B')
			return 0;
	}
	return 1;
}

int find_E(char slider[], int num) {
	for (int i = 0; i < 2 * num + 1; i++)
		if (slider[i] == 'E')
			return(i);
}

void swap_print(char slider[], int i, int j,int n) {
	int temp;
	char arr[10] = { '*' };
	for (int k = 0; k < 2 * n + 1; k++) {
		arr[k] = slider[k];
	}
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	for (int k = 0; k < 2 * n + 1; k++) {
		fine_arr[count_num][k] = arr[k];
	}
	if (count_num < 5)
		count_num++;
}


int play_game(char slider[] , int num ) {
	if (decide(slider, num)) {
		cout << "目标格局" << endl;
		return 1;
	}
	else {
		int location = find_E(slider,num);
		if (location - 3 >= 0)
			swap_print(slider, location, location - 3, num);
		if (location - 2 >= 0)
			swap_print(slider, location, location - 2, num);
		if (location - 1 >= 0)
			swap_print(slider, location, location - 1, num);
		if (location + 1 <= 2 * num)
			swap_print(slider, location, location + 1, num);
		if (location + 2 <= 2 * num)
			swap_print(slider, location, location + 2, num);
		if (location + 3 <= 2 * num)
			swap_print(slider, location, location + 3, num);
	}
	return 0;
}

void sort(char fine_arr[6][10],int n){
	int temp_arr[10];
	for (int i = 1; i < count_num; i++) {
		for (int j = 0; j < count_num - i; j++) {
			if (strcmp(fine_arr[j], fine_arr[j + 1]) > 0) {
				for (int k = 0; k < 2 * n + 1; k++) {
					temp_arr[k] = fine_arr[j][k];
					fine_arr[j][k] = fine_arr[j + 1][k];
					fine_arr[j + 1][k] = temp_arr[k];
				}
			}
		}
	}
	for (int i = 0; i < count_num; i++) {
		for (int j = 0; j < 2 * n + 1; j++) {
			cout << fine_arr[i][j];
		}
		cout << endl;
	}
}

int main() {
	int judge_time, num[5];
	char slider[5][10];
	cin >> judge_time;
	for (int i = 0; i < judge_time; i++) {
		cin >> num[i];
		for (int j = 0; j < 2 * num[i] + 1; j++)
			cin >> slider[i][j];
	}
	for (int i = 0; i < judge_time; i++) {
		cout << "result_" << i + 1 << endl;
		if(play_game(slider[i], num[i])==0)
			sort(fine_arr, num[i]);
		count_num = 0;
	}
	return 0;
}
