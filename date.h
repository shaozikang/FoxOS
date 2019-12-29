#include<iostream>
using namespace std;
class Date
{
public:
	Date(){}		//默认构造函数
	Date(double y = 1970, double m = 9, double d = 25 ){	//转换构造函数
		year = y;
		month = m;
		day = d;
	}		
	// Date(Date&); //拷贝构造函数
	
	// Date &operator = (Date& );	//等号运算符重载
	Date operator + (Date& );		//加号运算符重载
	// Date operator - (Date&);			//减号运算符重载
	// Date operator * (Date&);		//乘号运算符重载
	// Date operator / (Date&);			//除号运算符重载
	// ~Date(){};		//析构函数


	friend ostream& operator << (ostream& os, const Date& c);
	// friend istream& operator >> (istream& is, Date& c);

private:
	double year;
	double month;
	double day;
};

Date operator + (Date& d){
	return Date(this.year)
}


inline ostream& operator << (ostream& os, const Date& c)
{
	return os << c.year << '.' << c.month << '.' << c.day ;
}


// inline istream& operator >> (istream& is, Date& c)
// {
// 	return is >> c.real >> c.imag;
// }