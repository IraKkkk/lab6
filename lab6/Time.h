#ifndef TIME_H
#define TIME_H

#include <string>

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s);
    Time(const std::string& timeStr);
    Time(int totalSeconds);
    Time(const Time& other);

    int differenceInSeconds(const Time& other) const;
    void addSeconds(int secs);
    void subtractSeconds(int secs);
    bool operator<(const Time& other) const;
    int toSeconds() const;
    int toMinutesRounded() const;
};

// Додаткові функції, які можуть бути викликані ззовні бібліотеки

extern "C" {
    Time* createTime(int h, int m, int s);
    Time* createTimeFromString(const char* timeStr);
    Time* createTimeFromSeconds(int totalSeconds);
    void destroyTime(Time* timeObj);
}

#endif // TIME_H
