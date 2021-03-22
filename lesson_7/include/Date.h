#pragma once
#include <iostream>
//#include <assert.h>


class Date
{
	private:
		int m_day;
		int m_month;
		int m_year;
	public:
		Date(int day = 1, int month = 1, int year = 1900);
		~Date() { std::cout << "destruct" << std::endl;  }
		int GetDay() const { return m_day; }
		int GetMonth() const { return m_month; }
		int GetYear() const { return m_year; }

		friend std::ostream& operator<<(std::ostream& out, const std::unique_ptr<Date>& date);
};

