#include<iostream>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
#include <iomanip>
using namespace std;

const int MAX_TYPE_CHOICE = 2;
const int MAX_TYPE_ROUTE = 3; //自由行的目的地、旅行团的目的地都相同，都是3个，分别是国内短途（DomesticShort）、国内长途（DomesticLong）和国际游（International）
const int MAX_TYPE_LUGGAGE = 3;
const int MAX_TYPE_PASSENGER = 6;
const int MAX_TYPE_TEAM = 5;
const int MAX_PASSENGER = 62;
const int MAX_TYPE_GOOUT = 6;

enum route { DomesticShort, DomesticLong, International };

class Passenger {
public:
	Passenger(int passager_num = 0, char name = '0', int Luggage_num = 0, int choice = 0, int route_num = 0, int pay_ticket = 0, int pay_luggage = 0)
		: passager_num(passager_num),name(name), Luggage_num(Luggage_num), choice(choice), route_num(route_num), pay_ticket(pay_ticket), pay_luggage(pay_luggage) {
	};
	void to_passager_num(int num) {
		passager_num = num;
	}
	void to_name() {
		char ch1 = 'A', ch2 = 'a';
		int j = 0;
		for (int i = 0; i < passager_num; i++, ch1++) {
			if (passager_num > 26)
				break;
			if (i + 1 == passager_num)
				name = ch1;
		}
		for (int i = 0; i < passager_num - 26; i++, ch2++) {
			if (passager_num > 52)
				break;
			if (i + 1 == passager_num-26)
				name = ch2;
		}
		for (int i = 0; i < passager_num - 52; i++, j++) {
			if (i + 1 == passager_num - 52)
				name = j + '0';
		}
	}
	void to_Luggage_num() {
		Luggage_num = remainder % MAX_TYPE_LUGGAGE;
	}
	void to_choice() {
		choice = remainder % MAX_TYPE_CHOICE;
	}
	void change_choice() {
		if (choice)
			choice--;
	}
	void to_route_num() {
		route_num = remainder % MAX_TYPE_ROUTE;
	}
	void to_pay_ticket() {
		if (route_num == 0)
			pay_ticket = 10;
		if (route_num == 1)
			pay_ticket = 100;
		if (route_num == 2)
			pay_ticket = 500;
	}
	void to_pay_luggage() {
		pay_luggage = 0;
		if (route_num == 2)
			if (Luggage_num + 1 == 3)
				pay_luggage = 100;
	}
	void to_state() {
		state = 1;
	}
	void Gain_remainder(int aremainder) {
		remainder = aremainder;
	}
	char Get_name() {
		return(name);
	}
	int Get_Luggage_num() {
		return(Luggage_num);
	}
	int Get_choice() {
		return(choice);
	}
	int Get_route_num() {
		return(route_num);
	}
	int Get_pay_ticket() {
		return(pay_ticket);
	}
	int Get_pay_luggage() {
		return(pay_luggage);
	}
	int Get_state() {
		return(state);
	}
	void Get_route() {
		if (route_num == 0)
			cout << "国内短途，";
		if (route_num == 1)
			cout << "国内长途，";
		if (route_num == 2)
			cout << "国际游，  ";
	}
	void Get_way(){ 
		if (choice == 0)
			cout << "选择自由出行，";
		if (choice == 1)
			cout << "报名旅行社，  ";
	}
	void showMessage() {
		cout << "我是乘客" << name << "，";
		Get_way();
		Get_route();
		cout<< "携带" << Luggage_num + 1<< "件行李，";
		cout << "行李编号为：";
		for (int i = 0; i < Luggage_num + 1; i++) {
			cout << name << setw(2) << setfill('0') << i+1;
			if (i + 1 == Luggage_num + 1)
				cout << "，";
			else
				cout << "、";
		}
		cout << "买票需要付" << pay_ticket << "元" ;
		if (route_num == 2) {
			if (Luggage_num + 1 == 3)
				cout << "，行李托运费" << pay_luggage << "元。";
			else
				cout << "。";
		}
		else
			cout << "。";
		cout << endl;
	}
	

private:
	int passager_num;
	int remainder = 0;
	char name;
	int Luggage_num;
	int choice;
	int route_num;
	int pay_ticket;
	int pay_luggage;
	int state = 0;
};

class Luggage {
public:
	Luggage(int num = 0) :num(num) {};
	int Get_num() {
		return(num);
	}
private:
	int num;
};

class Team {
public:
	Team(int Passenger_num = 0, int route_num = 0, int pay = 0)
		:Passenger_num(Passenger_num), route_num(route_num), pay(pay) {};
	void Gain_remainder(int aremainder) {
		remainder = aremainder;
	}
	void to_route() {
		route_num = remainder % MAX_TYPE_ROUTE;
	}
	int Get_Passenger_num() {
		return(Passenger_num);
	}
	int Get_route_num() {
		return(route_num);
	}
	int Get_pay() {
		return(pay);
	}
	void Get_route() {
		if (route_num == 0)
			cout << "国内短途";
		if (route_num == 1)
			cout << "国内长途";
		if (route_num == 2)
			cout << "国际游";
	}
	void to_Passenger_num(Passenger Passenger_name) {
		Pas[Passenger_num] = Passenger_name;
		Passenger_num++;
	}
	void to_pay() {
		for (int i = 0; i < Passenger_num; i++) {
			pay = pay + (Pas[i].Get_pay_ticket() + Pas[i].Get_pay_luggage());
		}
	}
private:
	int remainder = 0;
	int Passenger_num;
	int route_num;
	int pay;
	Passenger Pas[MAX_TYPE_PASSENGER];
};

class TravelAgency {
public:
	TravelAgency(int team_num = 0) :team_num(team_num) {};
	void inputTeam(Team Team_name) {
		team[team_num] = Team_name;
		team_num++;
	}
	void Get_Passenger_num() {
		for (int i = 0; i < MAX_TYPE_TEAM; i++)
			Passenger_num += team[i].Get_Passenger_num();
	}
	void showMessage() {
		Get_Passenger_num();
		cout << "旅行社共计安排了5个旅行团，共计" << Passenger_num << "人报名。" << endl;
		cout << "出行的目的地分别是：";
		for (int i = 0; i < MAX_TYPE_TEAM; i++) {
			team[i].Get_route();
			cout << ", ";
		}
		cout << endl;
		cout << "每个旅行团的人数分别是：";
		for (int i = 0; i < MAX_TYPE_TEAM; i++) {
			cout << team[i].Get_Passenger_num();
			cout << "人";
			if (i + 1 == MAX_TYPE_TEAM)
				cout << "。";
			else
				cout << ", ";
		}
		cout << endl;
		cout << "每个旅行团需要支付的票价是：";
		for (int i = 0; i < MAX_TYPE_TEAM; i++) {
			team[i].to_pay();
			cout << team[i].Get_pay();
			cout << "元";
			if (i + 1 != MAX_TYPE_TEAM)
				cout << "，";
			else
				cout << "。";
		}
		cout << endl;
	}
private:
	static int Passenger_num;
	int team_num;
	Team team[MAX_TYPE_TEAM];
};

int TravelAgency::Passenger_num = 0;

class TicketOffice {
public:
	TicketOffice(int Passenger_num = 0) :Passenger_num(Passenger_num){}
	void pasMessage(Passenger Passenger_name) {
		Pas[Passenger_num] = Passenger_name;
		Passenger_num++;
	}
	void showMessage() {
		int charge[MAX_TYPE_GOOUT] = {0};
		cout << "售票结束，营业额统计信息如下：" << endl;
		for (int j = 0; j < Passenger_num; j++) {
			if (Pas[j].Get_choice() == 0 && Pas[j].Get_route_num() == 0)
				charge[0] += Pas[j].Get_pay_luggage() + Pas[j].Get_pay_ticket();
			if (Pas[j].Get_choice() == 0 && Pas[j].Get_route_num() == 1)
				charge[1] += Pas[j].Get_pay_luggage() + Pas[j].Get_pay_ticket();
			if (Pas[j].Get_choice() == 0 && Pas[j].Get_route_num() == 2)
				charge[2] += Pas[j].Get_pay_luggage() + Pas[j].Get_pay_ticket();
			if (Pas[j].Get_choice() == 1 && Pas[j].Get_route_num() == 0)
				charge[3] += Pas[j].Get_pay_luggage() + Pas[j].Get_pay_ticket();
			if (Pas[j].Get_choice() == 1 && Pas[j].Get_route_num() == 1)
				charge[4] += Pas[j].Get_pay_luggage() + Pas[j].Get_pay_ticket();
			if (Pas[j].Get_choice() == 1 && Pas[j].Get_route_num() == 2)
				charge[5] += Pas[j].Get_pay_luggage() + Pas[j].Get_pay_ticket();
		}
		cout << "国内短途自由行：" << charge[0] << "元，" << "乘客姓名：";
		for (int j = 0; j < Passenger_num; j++) {
			if (Pas[j].Get_choice() == 0 && Pas[j].Get_route_num() == 0) {
				cout << Pas[j].Get_name();
				if (j + 1 != Passenger_num)
					cout << " ";
			}
			if (j + 1 == Passenger_num)
				cout << "。";
		}
		cout << endl;
		cout << "国内长途自由行：" << charge[1] << "元，" << "乘客姓名：";
		for (int j = 0; j < Passenger_num; j++) {
			if (Pas[j].Get_choice() == 0 && Pas[j].Get_route_num() == 1) {
				cout << Pas[j].Get_name();
				if (j + 1 != Passenger_num)
					cout << " ";
			}
			if (j + 1 == Passenger_num)
				cout << "。";
		}
		cout << endl;
		cout << "国际游自由行：  " << charge[2] << "元，" << "乘客姓名：";
		for (int j = 0; j < Passenger_num; j++) {
			if (Pas[j].Get_choice() == 0 && Pas[j].Get_route_num() == 2) {
				cout << Pas[j].Get_name();
				if (j + 1 != Passenger_num)
					cout << " ";
			}
			if (j + 1 == Passenger_num)
				cout << "。";
		}
		cout << endl;
		cout << "国内短途团购：  " << charge[3] << "元，" << "乘客姓名：";
		for (int j = 0; j < Passenger_num; j++) {
			if (Pas[j].Get_choice() == 1 && Pas[j].Get_route_num() == 0) {
				cout << Pas[j].Get_name();
				if (j + 1 != Passenger_num)
					cout << " ";
			}
			if (j + 1 == Passenger_num)
				cout << "。";
		}
		cout << endl;
		cout << "国内长途团购：  " << charge[4] << "元，" << "乘客姓名：";
		for (int j = 0; j < Passenger_num; j++) {
			if (Pas[j].Get_choice() == 1 && Pas[j].Get_route_num() == 1) {
				cout << Pas[j].Get_name();
				if (j + 1 != Passenger_num)
					cout << " ";
			}
			if (j + 1 == Passenger_num)
				cout << "。";
		}
		cout << endl;
		cout << "国际游团购：    " << charge[5] << "元，" << "乘客姓名：";
		for (int j = 0; j < Passenger_num; j++) {
			if (Pas[j].Get_choice() == 1 && Pas[j].Get_route_num() == 2) {
				cout << Pas[j].Get_name();
				if (j + 1 != Passenger_num)
					cout << " ";
			}
			if (j + 1 == Passenger_num)
				cout << "。";
		}
	}
private:
	int Passenger_num;
	Passenger Pas[MAX_PASSENGER];
};

int main() {
	int fact_passenger_num;
	srand(static_cast<unsigned> (time(NULL)));
	fact_passenger_num = rand()% MAX_PASSENGER;
	cout << "本次五一节共有" << fact_passenger_num << "位旅客" << endl;
	Passenger visiter[MAX_PASSENGER];
	int number;
	srand((unsigned int)time(NULL));
	for (int i = 0; i < fact_passenger_num; i++) {
		visiter[i].to_passager_num(i + 1);
		number = rand();
		visiter[i].Gain_remainder(number);
		visiter[i].to_name();
		visiter[i].to_choice();
		visiter[i].to_route_num();
		visiter[i].to_pay_ticket();
	}
	for (int i = 0; i < fact_passenger_num; i++) {
		number = rand();
		visiter[i].Gain_remainder(number);
		visiter[i].to_Luggage_num();
		visiter[i].to_pay_luggage();
	}
	Team team[MAX_TYPE_TEAM];
	TravelAgency travel_agency;
	for (int i = 0; i < MAX_TYPE_TEAM; i++) {
		int count = 0;
		number = rand();
		team[i].Gain_remainder(number);
		team[i].to_route();
		for (int j = 0; j < fact_passenger_num; j++) {
			if (visiter[j].Get_choice() == 1&&visiter[j].Get_state() == 0)
				if (visiter[j].Get_route_num() == team[i].Get_route_num()) {
					team[i].to_Passenger_num(visiter[j]);
					visiter[j].to_state();
					count++;
				}
			if (count == 6) {
				count = 0;
				break;
			}
		}
	}
	for (int i = 0; i < fact_passenger_num; i++) {
		if (visiter[i].Get_choice() == 1 && visiter[i].Get_state() == 0)
			visiter[i].change_choice();
	}
	for (int i = 0; i < fact_passenger_num; i++) {
		visiter[i].showMessage();
	}
	cout << endl;
	cout << "旅行社开始报名：" << endl;
	for (int i = 0; i < MAX_TYPE_TEAM; i++) {
		travel_agency.inputTeam(team[i]);
	}
	travel_agency.showMessage();
	cout << endl;
	cout << "售票处开始售票......" << endl;
	TicketOffice  ticket_office;
	for (int i = 0; i < fact_passenger_num; i++) {
		ticket_office.pasMessage(visiter[i]);
	}
	ticket_office.showMessage();
	cout << endl;
	return 0;
}
