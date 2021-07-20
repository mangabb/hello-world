// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    struct tm* ptm;
    long utcSecs_fromPLC = 1625170346;  // 7/1/2021 16:12 EDT
    time_t utcTime_fromPLC = 0;
    struct tm Local_time;
    ptm = &Local_time;
    utcTime_fromPLC = utcSecs_fromPLC;
    localtime_s(ptm, &utcTime_fromPLC);  //convert time_t value to tm structure; local time  

    std::cout << "Hello World!\n";
    std::cout << Local_time.tm_year;
    std::cout << Local_time.tm_mon;
    std::cout << Local_time.tm_mday;
    std::cout << "...";
    std::cout << Local_time.tm_hour;
    std::cout << Local_time.tm_min;
    std::cout << Local_time.tm_sec;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
