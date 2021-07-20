// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Edits made in Github

#include <iostream>

int main()
{
    struct tm* ptm;
    long utcSecs;  
    time_t utcTime = 0;
    struct tm Local_time;
    ptm = &Local_time;
    long yyyy,mmm;
    utcSecs = time(NULL);
    utcTime = utcSecs;
    localtime_s(ptm, &utcTime);  //convert time_t value to tm structure; local time  

    std::cout << "Hello World!\n";
    yyyy = 1900 + Local_time.tm_year; // year since 1900
    mmm = Local_time.tm_mon + 1; // starts at 0
    std::cout << "Results from localtime_s: ";
    std::cout << Local_time.tm_year;
    std::cout << "-";
    std::cout << Local_time.tm_mon;
    std::cout << "-";
    std::cout << Local_time.tm_mday;
    std::cout << "...";
    std::cout << Local_time.tm_hour;
    std::cout << ":";
    std::cout << Local_time.tm_min;
    std::cout << ":";
    std::cout << Local_time.tm_sec;
    printf("\n\nYEAR and MONTH require additional conversions\n");
    printf("Date is: %4.4d-%2.2d-%2.2d\n", yyyy, mmm, Local_time.tm_mday);
    printf("Time is: %2.2d:%2.2d:%2.2d\n", Local_time.tm_hour, Local_time.tm_min, Local_time.tm_sec);
    std::cout << "\nEnd of program";


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
