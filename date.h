#include<iostream>
using namespace std;
class Date
{
public:
	Date(){}		//Ĭ�Ϲ��캯��
	Date(double y = 1970, double m = 9, double d = 25 ){	//ת�����캯��
		year = y;
		month = m;
		day = d;
	}		
	// Date(Date&); //�������캯��
	
	// Date &operator = (Date& );	//�Ⱥ����������
	Date operator + (Date& );		//�Ӻ����������
	// Date operator - (Date&);			//�������������
	// Date operator * (Date&);		//�˺����������
	// Date operator / (Date&);			//�������������
	// ~Date(){};		//��������


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