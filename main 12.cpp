#include <iostream>
#include <string>
using namespace std;

class WeekDays {
private:
    string Days[7];
    int CurrentDay;

    // Helper function to initialize days
    void initializeDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
    }

public:
    // Default constructor
    WeekDays() {
        initializeDays();
        CurrentDay = 0;  // Default to Sunday
    }

    // Parameterized constructor
    WeekDays(int day) {
        initializeDays();
        CurrentDay = day % 7;  // Keeps day within 0–6
    }

    // Returns current day name
    string getCurrentDay() const {
        return Days[CurrentDay];
    }

    // Returns next day name
    string getNextDay() const {
        return Days[(CurrentDay + 1) % 7];
    }

    // Returns previous day name
    string getPreviousDay() const {
        return Days[(CurrentDay + 6) % 7];
    }

    // Returns the day N days from today
    string getNthDayFromToday(int n) const {
        return Days[(CurrentDay + n) % 7];
    }
};

int main() {
    // Default constructor
    WeekDays day1;
    cout << "Default Day: " << day1.getCurrentDay() << endl;
    cout << "Next Day: " << day1.getNextDay() << endl;
    cout << "Previous Day: " << day1.getPreviousDay() << endl;
    cout << "20 Days From Now: " << day1.getNthDayFromToday(20) << endl;

    cout << "---------------------------" << endl;

    // Parameterized constructor (example: 8 % 7 = 1 ? Monday)
    WeekDays day2(8);
    cout << "Current Day: " << day2.getCurrentDay() << endl;
    cout << "Next Day: " << day2.getNextDay() << endl;
    cout << "Previous Day: " << day2.getPreviousDay() << endl;
    cout << "20 Days From Now: " << day2.getNthDayFromToday(20) << endl;

    return 0;
}

