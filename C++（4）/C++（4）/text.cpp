#include <iostream>
using namespace std;


class Date{

	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date &d);
	

public:


	int IsLeap(int year)
	{

		return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);

	}
	int GetMonthDay(int year, int month)
	{
		static int days[] = { 29, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31,30,31 };
		if (month == 2 && IsLeap(year))
		{

			month = 0;

		}

		return days[month];

	}

public:
	Date(int year=0, int month=0, int day=0) :m_year(year), m_month(month), m_day(day)
	{

	}
	Date(const Date& d)
	{
		m_year = d.m_year;
		m_month = d.m_month;
		m_day = d.m_day;
	}

	~Date()
	{

	}


public:
	Date& operator=(const Date& d)
	{

		if (this != &d)
		{

			m_year = d.m_year;
			m_month = d.m_month;
			m_day = d.m_day;


		}

		return *this;

	}


	Date& operator++()
	{

		++m_day;
		int days = GetMonthDay(m_year,m_month);
		if (m_day > days)
		{
			++m_month;
			if (m_month > 12)
			{
				m_year++;
				m_month = 1;

			}

			m_day = 1;

		}
		return *this;

	}


	Date operator++(int)
	{

		Date tmp(*this);
		++(*this);
		
		return tmp;

	}


   Date& operator+=(int day)
	{
		int days = GetMonthDay(m_year, m_month);
		while (m_day + day > days)
		{
			m_month++;
			if (m_month > 12)
			{
				m_year++;
				m_month = 1;
			}

		//	day = m_day + day - days;
			day -= days;
			days = GetMonthDay(m_year, m_month);

		}

		m_day += day;
	return *this;


    }


   Date operator+(int day)
   {

	   Date tmp(*this);
	   tmp+= day;
	   return tmp;

   }


   Date& operator-=(int day)
   {

	   if (m_day <=day)
	  {

		   if (m_month == 1)
		   {

			   m_month = 12;
			   m_year--;

		   }


		   else{

			   m_month--;

		   }

		   int days = GetMonthDay(m_year, m_month);

		   while (m_day + days < day)
		   {

			   if (m_month == 1)
			   {
				   m_month = 12;
				   m_year--;

			   }
			   else{

				   m_month--;
			   }


			   m_day += days;
			   days = GetMonthDay(m_year, m_month);

		   }


		   m_day = m_day + days - day;

	   }

	   else
	   {

		   m_day -= day;
	   }

	   return *this;

   }



	Date& operator-(int day)
   {

		//Date tmp(*this);
		(*this) -= day;
		return *this;


	}
	

	Date operator--(int)
	{

		Date tmp(*this);
		--(*this);
		return tmp;



	}


	Date& operator--()
	{

		if (m_day == 1)
		{

			if (m_month == 1)
			{

				m_month = 12;
				m_year--;

			}

			else{

				m_month--;

			}

			m_day = GetMonthDay(m_year, m_month);

		}
		m_day--;
		return *this;
	}
	bool operator>(const Date &d)
	{
		if (m_year > d.m_year)
		{
			return true;
		}
		else if (m_year == d.m_year)
		{
			if (m_month > d.m_month)
			{
				return true;
			}
			else if (m_month == d.m_month)
			{
				if (m_day > d.m_day)
				{
					return true;
				}
			}
			
		}

		return false;

	}

	bool operator==(const Date& d)
	{
		     return m_year == d.m_year \
				&& m_month == d.m_month
				&&m_day == d.m_day;
	}


	bool operator<=(const Date& d)
	{
		return !(*this > d);

	}

	bool operator>=(const Date& d)
	{
		return *this == d || *this > d;
	}

	bool operator<(const Date& d)
	{
		return !(*this >= d);
	}

	int operator-(const Date&d)
	{

		int flag = 1;
		Date max = *this;
		Date min = d;
		if (*this < d)
		{
			max = d;
			min = *this;
			flag = -1;

		}


		int day = 0;
		while (min < max)
		{
			++(min);
			++day;

		}

		return day*flag;


	}

private:

	int m_year;
	int m_month;
	int m_day;

};


 // Date operator+ (Date &d1, int value)
 // {

	//  Date tmp(d1.m_year , d1.m_month, d1.m_day + value);
	//  return tmp;

 //}


ostream &operator<<(ostream& out, const Date & d)
{

	out << d.m_year << "-" << d.m_month << "-" << d.m_day;
	return out;

}

istream &operator>>(istream& in, Date &d)
{

	in >> d.m_year >> d.m_month >> d.m_day;
	return in;


}

int main()
{

	//Date d(2020, 4, 10);
	//
	//Date &d1 = d;
	//d2 = d1;
	//Date d2 = d1;


	Date d(2021, 1, 10);
	/*d--;
	cout << d << endl;*/
	/*d -= 60;
	cout << d << endl;*/

	d = d - 110;
	cout << d << endl;

	/*cout << d << endl;
	++d;
	cout << d << endl;
	Date d1(2021, 4, 19);
	cout << d1 << endl;
	--d1;
	cout << d1 << endl;
	Date d2(2006, 6, 30);
	cout << d2 << endl;
	++d2;
	cout << d2 << endl;
	Date d3(2020, 8, 31);
	cout << d3 << endl;
	++d3;*/
	//cout << d3 << endl;



	return 0;

}
class Date

{

public:

	// 获取某年某月的天数

	int GetMonthDay(int year, int month)
	{

		static int days[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

		int day = days[month];
		//当是闰年且是二月的时候
		if (month == 2

			&& ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))

		{

			day += 1;

		}

		return day;

	}

	// 全缺省的构造函数

	Date(int year = 1900, int month = 1, int day = 1)
	{

		if (year < 1900

			|| month < 1 || month > 12

			|| day < 1 || day > GetMonthDay(year, month))

		{

			cout << "非法日期" << endl;

		}



		_year = year;

		_month = month;

		_day = day;

	}



	// 拷贝构造函数

	// d2(d1)

	Date(const Date& d)
	{

		this->_year = d._year;

		_month = d._month;

		_day = d._day;

	}



	// 赋值运算符重载

	// d2 = d3 -> d2.operator=(&d2, d3)

	Date& operator=(const Date& d)
	{

		if (this != &d)
		{

			this->_year = d._year;

			this->_month = d._month;

			this->_day = d._day;

		}


		return *this;

	}



	// 析构函数
	~Date()
	{

		// 清理工作

	}



	void Print()
	{

		cout << _year << "-" << _month << "-" << _day << endl;

	}



	// 日期+=天数
	// d1 += 10
	// d1 += -10
	Date& operator+=(int day)
	{

		if (day < 0)
		{
			return *this -= -day;
		}

		_day += day;


		while (_day > GetMonthDay(_year, _month))
		{

			_day -= GetMonthDay(_year, _month);

			_month++;

			if (_month == 13)
			{

				_year++;

				_month = 1;

			}

		}
		return *this;
	}



	// 日期+天数
	// d + 10
	Date operator+(int day)
	{
		Date ret(*this);

		ret += day;


		return ret;

	}



	// 日期-天数
	Date operator-(int day)
	{

		Date ret(*this);

		ret -= day;

		return ret;

	}


	// 日期-=天数
	// d -= 100
	// d -= -100
	Date& operator-=(int day)
	{

		if (day < 0)

		{

			return *this += -day;

		}



		_day -= day;

		while (_day <= 0)
		{

			--_month;

			if (_month == 0)
			{

				--_year;

				_month = 12;

			}

			_day += GetMonthDay(_year, _month);

		}



		return *this;

	}



	// 前置++
	// ++d -> d.operator++(&d)
	Date& operator++()
	{

		*this += 1;

		return *this;

	}



	// 后置++
	// d++ -> d.operator++(&d, 0)
	Date operator++(int)
	{

		Date ret(*this);

		*this += 1;

		return ret;

	}



	// // 后置--
	Date operator--(int)
	{

		Date ret(*this);

		*this -= 1;

		return ret;

	}



	// 前置--
	Date& operator--()
	{

		*this -= 1;

		return *this;

	}

	// d1 > d2
	// >运算符重载

	bool operator>(const Date& d)
	{

		if (_year > d._year)

		{

			return true;

		}

		else if (_year == d._year)
		{

			if (_month > d._month)
			{

				return true;

			}

			else if (_month == d._month)
			{

				if (_day > d._day)
				{

					return true;

				}

			}

		}

		return false;

	}



	// ==运算符重载

	bool operator==(const Date& d)
	{

		return _year == d._year

			&& _month == d._month

			&& _day == d._day;

	}



	// 下面复用上面两个的实现
	// >=运算符重载
	inline bool operator >= (const Date& d)
	{

		return *this > d || *this == d;

	}



	// <运算符重载
	bool operator < (const Date& d)
	{

		return !(*this >= d);

	}



	// <=运算符重载
	bool operator <= (const Date& d)
	{

		return !(*this > d);

	}



	// !=运算符重载
	bool operator != (const Date& d)
	{

		return !(*this == d);

	}



	// d1 - d2
	// 日期-日期 返回天数
	int operator-(const Date& d)
	{

		int flag = 1;

		Date max = *this;

		Date min = d;

		if (*this < d)
		{

			max = d;

			min = *this;

			flag = -1;

		}



		int day = 0;

		while (min < max)
		{

			++(min);

			++day;

		}



		return day*flag;

	}



private:

	int _year;

	int _month;

	int _day;

};
