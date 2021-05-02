#include<iostream>
using namespace std;

class Automobile {
public:
	Automobile(string name = " ") :name(name) {};
	string Get_name() {
		return(name);
	}
private:
	string name;
};    // 汽车类

class Park {
public:
	Park(int total_num = 0, int now_num = -1) :total_num(total_num), now_num(now_num) {};
	int Get_now_num() {
		return(now_num);
	}
	void in(string name) {
		now_num++;
		automobile[now_num] = name;
	}
	void out(string name) {
		automobile[now_num] = "";
		now_num--;
	}
	void fee(int fee) {
		parking_fee += fee;
	}
	void showInfo();
private:
	int total_num;
	int now_num;
	int parking_fee = 0;
	string automobile[2];
};		// 停车场类

class Truck:private Automobile{
public:
	Truck(string name, double load) :Automobile(name), load(load) {};
	void enter(Park* park) {
		if (park->Get_now_num() == 1)
			cout << "无法为" << Get_name() << "分配停车位" << endl;
		else {
			cout << Get_name() << "进入停车场，分配停车位" << endl;
			park->in(Get_name());
		}
	}
	void pay(Park* park) {
		int fee = 3;
		cout << "缴纳停车费" << fee << "元" << endl;
		park->fee(fee);
	}
	void leave(Park* park) {
		cout << Get_name() << "离开停车场，";
		pay(park);
		park->out(Get_name());
	}
private:
	double load;
};

class Car :private Automobile {
public:
	Car(string name, string brand) :Automobile(name), brand(brand) {};
	void enter(Park* park) {
		if (park->Get_now_num() == 1)
			cout << "无法为" << Get_name() << "分配停车位" << endl;
		else {
			cout << Get_name() << "进入停车场，分配停车位" << endl;
			park->in(Get_name());
		}
	}
	void pay(Park* park) {
		int fee = 1;
		cout << "缴纳停车费" << fee << "元" << endl;
		park->fee(fee);
	}
	void leave(Park* park) {
		cout << Get_name() << "离开停车场，";
		pay(park);
		park->out(Get_name());
	}
private:
	string brand;
};

class Bus :private Automobile {
public:
	Bus(string name, int load_num) :Automobile(name), load_num(load_num) {};
	void enter(Park* park) {
		if (park->Get_now_num() == 1)
			cout << "无法为" << Get_name() << "分配停车位" << endl;
		else {
			cout << Get_name() << "进入停车场，分配停车位" << endl;
			park->in(Get_name());
		}
	}
	void pay(Park* park) {
		int fee = 2;
		cout << "缴纳停车费" << fee << "元" << endl;
		park->fee(fee);
	}
	void leave(Park* park) {
		cout << Get_name() << "离开停车场，";
		pay(park);
		park->out(Get_name());
	}
private:
	int load_num;
};

void Park::showInfo() {
	cout << "停车场目前停放了"<<now_num + 1<<"辆车:";
	for (int i = 0; i < now_num + 1; i++) {
		cout << automobile[i] << ",";
	}
	cout << "共收入" << parking_fee << "元停车费" << endl;
}

int main() {
	int N;
	cout << "请输入停车位数量：";
	cin >> N;// 输入停车位数量，此处输入2

	Park* park = new Park(N);// 创建一个停车场对象

	Car car1("鲁B-12345", "奥迪A6");  // 创建轿车对象
	car1.enter(park);    // car1进入停车场，分配停车位

	Truck truck("鲁B-23456", 15);  // 创建卡车对象
	truck.enter(park);   // truck进入停车场，分配车位

	car1.leave(park);   // car1离开停车场，缴纳停车费

	Bus bus("鲁B-34567", 50);  // 创建公交车对象
	bus.enter(park);   // bus进入停车场，分配车位

	/* 显示当前停放的车辆的车牌号码，以及当前的全部停车费收入*/
	park->showInfo();

	Car car2("鲁B-45678", "宝马320");  // 创建轿车对象
	car2.enter(park);
	// car2进入停车场，分配停车位。因为没有空余停车位，所以无法分配

	bus.leave(park);  // bus离开停车场，缴纳停车费
	truck.leave(park);  // truck离开停车场，缴纳停车费

	/* 显示当前停放的车辆的车牌号码，以及当前的全部停车费收入*/
	park->showInfo();
	delete park;

	return 0;
}
