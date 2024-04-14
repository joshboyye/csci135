/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab10E

THis program will create a class called Time
*/

#include <iostream>
using namespace std;

class Time { 
public:
    int h;
    int m;
    Time(int hour, int minute) : h(hour), m(minute) {}
};

enum Genre {
    ACTION, COMEDY, DRAMA, ROMANCE, THRILLER
};

class Movie { 
public: 
    string title;
    Genre genre;
    int duration;
    Movie(std::string t, Genre g, int d) : title(t), genre(g), duration(d) {}
};

class TimeSlot { 
public: 
    Movie movie;
    Time startTime;
    TimeSlot(Movie mv, Time start) : movie(mv), startTime(start) {}
};

int minutesSinceMidnight(Time time){
    return time.h * 60 +time.m;
}

int minutesUntil(Time earlier, Time later){
    return minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
}

Time addMinutes(Time time0, int addedMinutes){
    int newTotalMinutes = minutesSinceMidnight(time0) + addedMinutes;
    int newHour = newTotalMinutes / 60;
    int newMinutes = newTotalMinutes % 60;
    return Time(newHour,newMinutes);
}
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    Time endTime = addMinutes(ts.startTime, ts.movie.duration);
    return TimeSlot(nextMovie, endTime);
}

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts){
    Time endTime(ts.startTime.h, ts.startTime.m);
    endTime.m += ts.movie.duration;
    if (endTime.m >= 60) {
        endTime.h += endTime.m / 60;
        endTime.m %= 60;
    }
    cout<<" ";
    printMovie(ts.movie);
    cout<<" [starts at " << ts.startTime.h << ":" << ts.startTime.m << ", ends by " 
              << endTime.h << ":" << endTime.m << "]" <<endl;
}
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    Time end1 = addMinutes(ts1.startTime, ts1.movie.duration);
    Time end2 = addMinutes(ts2.startTime, ts2.movie.duration);
    return !(minutesUntil(end1, ts2.startTime) > 0 || minutesUntil(end2, ts1.startTime) > 0);
}

int main(){
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};
    Movie movie3 = {"Straight Outta Compton", DRAMA,187};
    Movie movie4 = {"Love And Basketball", ROMANCE, 120};
    Movie movie5 = {"Us",THRILLER, 121};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie3, {16, 45}}; 
    TimeSlot night = {movie4, {19,15}};
    TimeSlot latenight = {movie5, {21,30}};

    cout << "Overlap between morning and daytime: " << (timeOverlap(morning, daytime) ? "Yes" : "No") << endl;
    cout << "Overlap between daytime and evening: " << (timeOverlap(daytime, evening) ? "Yes" : "No") << endl;
    cout << "Overlap between evening and night: " << (timeOverlap(evening, night) ? "Yes" : "No") << endl;
    cout << "Overlap between night and latenight: " << (timeOverlap(night, latenight) ? "Yes" : "No") << endl;

    return 0;
}