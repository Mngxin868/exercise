#include<iostream>
using namespace std;

class Goods {    // 商品类
public:
	Goods(string aname = "", double aprice = 0.0, double anum = 0.0);
	double getPrice();
	double getnum();
	void printInfo();  // 输出该商品的信息：名称、标牌价格、购买数量

private:
	string name;
	double price;
	double num;
};

Goods::Goods(string aname, double aprice, double anum) {
	name = aname;
	price = aprice;
	num = anum;
}

double Goods::getPrice() {
	return price;
}

double Goods::getnum() {
	return num;
}

void Goods::printInfo() {
	cout << name << "," << price << "," << num << endl;
}

class Cart {                                 // 购物车类
public:
	Cart(){}
	void addItem(Goods GoodName);                      // 添加一定数量的商品到购物车
	double checkout();                   // 对购物车中的商品进行结算
	void printInvoice();                // 将商品信息输出到显示器
private:
	Goods iterms[20];
	int num = 0;
};

void Cart::addItem(Goods GoodName) {
	iterms[num] = GoodName;
	num++;
}

double Cart::checkout() {
	double temp_fee = 0.0;
	for (int i = 0; i < num; i++) {
		temp_fee = temp_fee + (iterms[i].getPrice()) * (iterms[i].getnum());
	}
	return temp_fee;
}

void Cart::printInvoice() {
	cout << "您需要支付" << checkout() << "元" << endl;
	for (int i = 0; i < num; i++) {
		iterms[i].printInfo();
	}
}

int main() {
	Goods tShirt("Tshirt", 79, 2);// 创建服装对象，名称、价格、数量
	Goods suit("suit", 1099, 1);  // 套装
	Goods hat("hat", 129, 3);  // 帽子
	Goods tv("tv set", 4899, 1); // 创建家电对象，名称、价格、数量
	Goods ac("air condition", 5280, 1);// 空调

	//将商品添加到购物车
	Cart myCart;
	myCart.addItem(tShirt);
	myCart.addItem(suit);
	myCart.addItem(hat);
	myCart.addItem(tv);
	myCart.addItem(ac);

	myCart.checkout();   // 购物车商品结算，显示顾客需要支付的总金额
	myCart.printInvoice(); // 将购物清单输出到显示器上

	return 0;
}
