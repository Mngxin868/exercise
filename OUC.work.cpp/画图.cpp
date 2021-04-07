#include<iostream>
using namespace std;

struct Point {
	int x; // 横坐标
	int y; // 纵坐标
};

//显示主菜单
void displayMenu() {
	for (int i = 0; i < 18; i++)
		cout << "*";
	cout << endl;
	cout << " 1. Circle(圆)" << endl;
	cout << " 2. Rectangle(长方形)" << endl;
	cout << " 0. Exit(退出)" << endl;
	for (int i = 0; i < 18; i++)
		cout << "*";
	cout << endl;
	cout << endl;
}

//得到用户输入的两个点
void getTwoPoints(struct Point* startP, struct Point* endP) {
	cout << "Please input the coordinate(x,y) of the start point: ";
	cin >> startP->x >> startP->y;
	cout << "Please input the coordinate(x,y) of the end point: ";
	cin >> endP->x >> endP->y;
}

//以（x，y）的形式打印点
void printPoint(struct Point* fineP) {
	cout << " (" << fineP->x << "," << fineP->y << ") ";
}

//画圆的函数
void drawCircle(struct Point* startP, struct Point* endP) {
	struct Point centerP;
	if (endP->x - startP->x == endP->y - startP->y) {
		centerP.x = (startP->x + endP->x) / 2;
		centerP.y = (startP->y + endP->y) / 2;
		cout << "Draw a circle at center";
		printPoint(&centerP);
		cout << "with radius " << (endP->x - startP->x) / 2;
	}
	else
		cout << "Not a circle, Select again";
	cout << endl;
	cout << endl;
}

//画长方形的函数
void drawRectangle(struct Point* startP, struct Point* endP) {
	struct Point topleft;
	topleft.x = startP->x;
	topleft.y = startP->y;
	cout << "Draw a rectangle at topleft";
	printPoint(&topleft);
	cout << ", whose length is " << endP->x - startP->x;
	cout << " end width is " << endP->y - startP->y;
	cout << endl;
	cout << endl;
}

int main() {
	int choice = -1;
	struct Point startP, endP;
	while (choice) {
		displayMenu();
		cout << "Please select the shape:";
		cin >> choice;
		switch (choice) {
		case 1://圆
			getTwoPoints(&startP, &endP);
			drawCircle(&startP, &endP);
			break;
		case 2://长方形
			getTwoPoints(&startP, &endP);
			drawRectangle(&startP, &endP);
			break;
		case 0://退出
			cout << "Good Bye!" << endl;
			break;
		default:
			cout << "Not supported! Please select again!" << endl;
			cout << endl;
			break;
		}
	}
	return 0;
}
