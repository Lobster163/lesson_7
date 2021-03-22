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

bool operator<(const std::unique_ptr<Date>& date1, const std::unique_ptr<Date>& date2)
{
	if (date1->m_year < date2->m_year)
		return true;

	if (date1->m_month < date2->m_month && (date1->m_year <= date2->m_year))
		return true;

	if (date1->m_day < date2->m_day && date1->m_month <= date2->m_month && date1->m_year <= date2->m_year)
		return true;

	return false;
}

bool operator>(const std::unique_ptr<Date>& date1, const std::unique_ptr<Date>& date2)
{
	return (date2 < date1);
}

bool operator==(const std::unique_ptr<Date>& date1, const std::unique_ptr<Date>& date2)
{
	return !((date1 < date2) || (date2 < date1));
}
