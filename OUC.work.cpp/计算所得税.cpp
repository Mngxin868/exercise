#include<iostream>
#include<iomanip>
using namespace std;

struct Rule {
	int basic_money;
	int interest;
};

void  inputRules(struct Rule rules[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "请输入第" << i + 1 << "条规则：";
		cin >> rules[i].basic_money >> rules[i].interest;
	}
	cout << endl;
}

void displayRules(struct Rule rules[], int n) {
	cout << "纳税规则如下：" << endl;
	cout << "纳税线  税率" << endl;
	for (int i = 0; i < n; i++) {
		cout << rules[i].basic_money << "     "<<rules[i].interest << endl;
	}
	cout << endl;
}

double computeTax(struct Rule rules[], int n, int income) {
	double tax = 0.00;
	for (int i = n - 1; i >= 0; i--) {
		if (income > rules[i].basic_money) {
			tax = tax + ((double)income - (double)rules[i].basic_money) * (double)rules[i].interest / 100;
			income = rules[i].basic_money;
		}
	}
	return tax;
}

int main() {
	int rule_num = 0;
	int income = 0;
	double tax = 0.00;
	struct Rule rules[10];
	cout << "Please put the number of rules: ";
	cin >> rule_num;
	inputRules(rules, rule_num);
	displayRules(rules, rule_num);
	cout << "请输入您的收入：";
	cin >> income;
	while (income >= 0) {
		cout << "您的收入是：" << income << " ,";
		tax = computeTax(rules, rule_num, income);
		cout << "应缴所得税：" << setiosflags(ios::fixed) << setprecision(2) << tax << " 元。";
		cout << endl;
		cout << endl;
		cout << "请输入您的收入：";
		cin >> income;
	}
	cout << "再见!" << endl;
	return 0;
}
