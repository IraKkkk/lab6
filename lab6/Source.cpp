#include "time.h"

// ��������� ������ ����� Time
Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

Time::Time(const std::string& timeStr) {
    // ��������� ������������ �� ������ � ������ "������:�������:�������"
}

// ��������� ����� ������ ����� Time

// ��������� ������� ��� ������� ����� ��������
extern "C" {
    Time* createTime(int h, int m, int s) {
        return new Time(h, m, s);
    }

    Time* createTimeFromString(const char* timeStr) {
        return new Time(std::string(timeStr));
    }

    Time* createTimeFromSeconds(int totalSeconds) {
        return new Time(totalSeconds);
    }

    void destroyTime(Time* timeObj) {
        delete timeObj;
    }
}
