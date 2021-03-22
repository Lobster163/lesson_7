﻿#include "include/lesson_7.h"

int main()
{
    punkt_1();

    return 0;
}

void punkt_1()
{
    time_t seconds = time(NULL);
    tm timeinfo;
    localtime_s(&timeinfo, &seconds);

    std::unique_ptr<Date> date;
    std::unique_ptr<Date> dateToday = std::make_unique<Date>(timeinfo.tm_mday, timeinfo.tm_mon + 1, timeinfo.tm_year + 1900);
    if (date)
        std::cout << date;
    else
        std::cout << "\"date\" is null" << std::endl;

    std::cout << dateToday;
    date = std::move(dateToday);

    if (date)
        std::cout << date;
    else
        std::cout << "\"date\" is null" << std::endl;

    if (dateToday)
        std::cout << dateToday;
    else
        std::cout << "\"dateToday\" is null" << std::endl;
}

void punkt_2()
{

}