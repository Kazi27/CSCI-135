/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 10E

comments
comments
comments
*/

#include <iostream>
#include <string>
using namespace std;

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time { 
    public:
        int h;
        int m;
};
class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};
class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

int minutesSinceMidnight(Time time);
bool timeOverlap(TimeSlot ts1, TimeSlot ts2); 

int minutesSinceMidnight(Time time) //calculates the amount of minutes the inputted time is after midnight (00:00)
{
    int minutes = (time.h * 60) + time.m;
    return minutes;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2)
{
    if (minutesSinceMidnight(ts1.startTime) > minutesSinceMidnight(ts2.startTime))
    {
        int endTime2 = minutesSinceMidnight(ts2.startTime) + ts2.movie.duration;
        if (endTime2 > minutesSinceMidnight(ts1.startTime))
            return true;
        else
            return false;
    }
    else
    {
        int endTime1 = minutesSinceMidnight(ts1.startTime) + ts1.movie.duration;
        if (endTime1 > minutesSinceMidnight(ts2.startTime))
            return true;
        else
            return false;
    }
}

int main()
{   
    Movie movie1 = {"The Wolf of Wall Street", COMEDY, 180};
    Movie movie2 = {"5 Centimeters Per Second", DRAMA, 63};
    TimeSlot daytime1 = {movie1, {10, 30}}; //630 minutes
    TimeSlot daytime2 = {movie2, {8, 30}}; //510 miinutes
    cout << timeOverlap(daytime1, daytime2);
}