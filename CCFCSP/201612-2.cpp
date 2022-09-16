#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	if (T <= 3500) {	//不交税
		cout << T;
	}
	else if (T <= 4955) {
		cout << 3500 + (T - 3500) / (1 - 0.03);
	}
	else if (T <= 7655) {
		cout << 5000 + (T - 5000 + 45) / (1 - 0.1);
	}
	else if (T <= 11255) {
		cout << 8000 + (T - 8000 + 345) / (1 - 0.2);
	}
	else if (T <= 30755) {
		cout << 12500 + (T - 12500 + 1245) / (1 - 0.25);
	}
	else if (T <= 44755) {
		cout << 38500 + (T - 38500 + 7745) / (1 - 0.3);
	}
	else if (T <= 61005) {
		cout << 58500 + (T - 58500 + 13745) / (1 - 0.35);
	}
	else {
		cout << 83500 + (T - 83500 + 22495) / (1 - 0.45);
	}
	return 0;
}
