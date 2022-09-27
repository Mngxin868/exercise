#include<iostream>
using namespace std;

int main() {
	char str[15];
	cin >> str;
	int k = 1, sum = 0;
	for (int i = 0; i < 11; i++) {
		sum += (str[i] - '0') * k;
		k++;
		if (i == 0 || i == 4 || i == 10) i++;
	}
	if (str[12] - '0' == sum % 11) {
		cout << "Right";
	}
	else if (str[12] == 'X' && sum % 11 == 10) {
		cout << "Right";
	}
	else{
		if (sum % 11 == 10) {
			str[12] = 'X';
		}
		else {
			str[12] = sum % 11 + '0';
		}
		cout << str;
	}
	return 0;
}
