#include "include/Date.h"

Date::Date(int day, int month, int year)
{
	//assert(day <= 0 || month <= 0  || year <= 0);
	m_day = day;
	m_month = month;
	m_year = year;
}

std::ostream& operator<<(std::ostream& out, const std::unique_ptr<Date>& date)
{
	out << date->GetDay() << "." << date->GetMonth() << "." << date->GetYear();
	return out << std::endl;
}
