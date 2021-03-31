#include<iostream>
using namespace std;

int Digital_Root(int num) {
	while (num > 9) {
		num = num % 10 + num / 10;
	}
	return(num);
}

//输出数字根矩阵
int main() {
	int count_i=0,count_j=1;
	for (count_i; count_i < 10; count_i++) {
		if (count_i == 0) {
			cout << " ";
			for (count_j; count_j < 10; count_j++)
				cout<<" "<<count_j;
		}
		else {
			cout << count_i;
			for (count_j=1; count_j < 10; count_j++)
				cout <<" "<< Digital_Root(count_i * count_j);
		}
		cout << endl;
	}
	return 0;
}

//输出对应数字的数字根星图
int main() {
	int count_i = 1, count_j,specific_number;
	cout << "the specific number is: ";
	cin >> specific_number;
	cout << endl;
	for (count_i; count_i < 10; count_i++) {
		for (count_j = 1; count_j < 10; count_j++) {
			if (specific_number == Digital_Root(count_i * count_j))
				cout << " *";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}
