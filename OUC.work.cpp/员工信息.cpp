#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

static const int DAYS_PER_MONTH[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

class Date {
public:
	/* 默认构造函数，以fullyear的形式给出年月日，默认值为1990年1月1日，同时设置日期分隔符为“-” */
	Date(int ayear = 1990, int amonth = 1, int aday = 1);

	/* get、set方法 */
	// 设置日期，如果有非法的月或日，将其置为1
	void setDate(int ayear, int amonth, int aday);
	void setYear(int ayear);
	int getYear();
	void setMonth(int amonth);
	int getMonth();
	void setDay(int aday);
	int getDay();
	void setSeparator(char aseparator);

	/* 输出函数，请使用setfill(‘0’)和setw(2)，需要包含<iomanip>头文件 */
	void printFullYear();      // 以YYYY-MM-DD的形式打印，2011-01-08
	void printStandardYear(); // 以YY-MM-DD的形式打印，比如11-01-08
		/*  计算函数  */
		// 计算当前日期与参数日期之间相差几个整年，仅考虑参数日期比当前日期晚的情况
	int fullYearsTo(int ayear, int amonth, int aday);
		/* 计算当前日期与参数日期之间相差多少天(考虑闰年)，如果参数日期在当前日期之前，返回负数。 */
	int daysTo(int ayear, int amonth, int aday);
	bool isLeapyear(int year);//断参数年是否是闰年。
	int getDayOfYear(int ayear, int amonth, int aday);  //计算当前日期是本年的第几天
	int getLeftDaysYear(int ayear, int amonth, int aday); //计算当前日期距本年结束还有几天，不包括当前日期这天
	int checkDay(int day); //根据年和月，判断参数日期是否合法。如果合法，返回day，否则返回-1。

private:
	int year;
	int month;
	int day;
	char separator = '-';  // 日期分隔符
};

Date::Date(int ayear, int amonth, int aday) {
	year = ayear;
	month = amonth;
	day = aday;
}

void Date::setDate(int ayear, int amonth, int aday) {
	year = ayear;
	month = amonth;
	day = aday;
}

int Date::getYear() {
	return year;
}

int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

void Date::setYear(int ayear) {
	year = ayear;
}

void Date::setMonth(int amonth) {
	month = amonth;
}

void Date::setDay(int aday) {
	day = aday;
}

void Date::setSeparator(char aseparator) {
	separator = aseparator;
}

void Date::printFullYear() {
	cout << getYear();
	cout << separator;
	cout << setfill('0') << setw(2) << getMonth();
	cout << separator;
	cout << setfill('0') << setw(2) << getDay();
}

void Date::printStandardYear() {
	cout << getYear() % 100;
	cout << separator;
	cout << setfill('0') << setw(2) << getMonth();
	cout << separator;
	cout << setfill('0') << setw(2) << getDay();
	cout << endl;
}

int Date::fullYearsTo(int ayear, int amonth, int aday) {
	int D_value = ayear - year;
	if (amonth > month)
		D_value--;
	else
		if (aday > day)
			D_value--;
	return(D_value);
}

bool Date::isLeapyear(int year) {
	return(year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int check(int year) {
	return(year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

int Date::getDayOfYear(int ayear, int amonth, int aday) {
	int count = 0;
	for (int i = 0; i < amonth - 1; i++) {
		count += DAYS_PER_MONTH[i];
	}
	count += aday;
	if (amonth > 2) {
		if (isLeapyear(ayear))
			count++;
	}
	return(count);
}

int Date::getLeftDaysYear(int ayear, int amonth, int aday) {
	if (isLeapyear(ayear))
		return(366 - getDayOfYear(ayear, amonth, aday));
	else
		return(365 - getDayOfYear(ayear, amonth, aday));
}

int Date::checkDay(int day) {
	if (day <= 0)
		return -1;
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		if (day > 31)
			return -1;
	if(month == 4 || month == 6 || month == 9 || month == 11)
		if (day > 30)
			return -1;
	if (month == 2)
		if (isLeapyear(year))
			if (day > 29)
				return -1;
			else
				return day;
		else
			if (day > 28)
				return -1;
			else
				return day;
	return day;
}

int find(int year1, int month, int day, int year2) {
	int count = 365 * (year1 - year2);
	for (int i = year2; i < year1; i++) {
		if (check(i))
			count++;
	}
	for (int i = 0; i < month - 1; i++) {
		count += DAYS_PER_MONTH[i];
	}
	count += day;
	if (month > 2) {
		if (check(year1))
			count++;
	}
	return(count);
}

int Date::daysTo(int ayear, int amonth, int aday) {
	int D_year1 = 0, D_year2 = 0;
	if (ayear > year) {
		D_year1 = find(ayear, amonth, aday, year);
		D_year2 = find(year, month, day, year);
	}
	else {
		D_year1 = find(ayear, amonth, aday, ayear);
		D_year2 = find(year, month, day, ayear);
	}
	return(D_year1 - D_year2);
}

class Employee {
public:
	//构造函数，使用“初始化列表”初始化数据成员
	Employee(string, string, Date&, Date&);
	//打印员工的信息。调用Date类的print函数，打印员工的生日和雇佣日期。
	void print();
	//计算员工在参数指定的日期时，满多少岁。请使用Date类的fullYearsTo函数
	int getAge(Date& date);
	//计算该员工在参数指定的日期时，工作满了多少年。
	int getYearsWorked(Date& date);
	//计算该员工在参数指定的日期时，工作了多少天。使用Date类的daysTo函数。
	int getDaysWorked(Date& date);
	~Employee();//析构函数
private:
	string firstName;
	string lastName;
	Date birthDate;    //内嵌对象，出生日期
	Date hireDate;     //内嵌对象，雇用日期
};

Employee::Employee(string afirstName, string alastName, Date& abirthDate, Date& ahireDate) {
	firstName = afirstName;
	lastName = alastName;
	birthDate = abirthDate;
	hireDate = ahireDate;
}

void Employee::print() {
	cout << lastName << ", " << firstName;
	cout << " Hired: ";
	hireDate.printFullYear();
	cout << " Birthday: ";
	birthDate.printFullYear();
}

int Employee::getAge(Date& atoday) {
	return(birthDate.fullYearsTo(atoday.getYear(), atoday.getMonth(), atoday.getDay()));
}

int Employee::getYearsWorked(Date& atoday) {
	return(hireDate.fullYearsTo(atoday.getYear(), atoday.getMonth(), atoday.getDay()));
}

int Employee::getDaysWorked(Date& atoday) {
	return(hireDate.daysTo(atoday.getYear(), atoday.getMonth(), atoday.getDay()));
}

Employee::~Employee() {

}

int main() {
	Date birth(1969, 8, 11);
	Date hire(1998, 4, 1);
	Date today(2010, 4, 30);
	Employee manager("Bob", "Blue", birth, hire);
	cout << endl;
	manager.print();
	cout << endl;
	cout << manager.getAge(today) << endl;
	cout << manager.getDaysWorked(today) << endl;
	return 0;
}
