#include <iostream>
#include <string>
using namespace std;

class CricketPlayer {
private:
    string name;
    int jerseyNumber;
    double battingAverage;
    int matchesPlayed;

public:
    // Parameterized constructor using this keyword
    CricketPlayer(string name, int jerseyNumber, double battingAverage) {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
        this->matchesPlayed = 1; // start with 1 to avoid divide-by-zero drama
    }

    // Improve batting average and return object for method chaining
    CricketPlayer& improveAverage(int runs) {
        battingAverage += runs * 0.05; // magical boost ?
        return *this;
    }

    // Simulate playing a match
    void playMatch(int runsScored) {
        matchesPlayed++;
        battingAverage = ((battingAverage * (matchesPlayed - 1)) + runsScored)
                         / matchesPlayed;
    }

    // Display player stats with commentary
    void displayPlayerStats() const {
        cout << "Player Name: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
        cout << "Batting Average: " << battingAverage << endl;
        cout << "Commentary: This batting average is more consistent than Karachi’s weather!"
             << endl;
        cout << "--------------------------------------" << endl;
    }
};

int main() {
    // Creating dream squad
    CricketPlayer babar("Babar Azam", 56, 48.5);
    CricketPlayer rizwan("Muhammad Rizwan", 16, 46.2);
    CricketPlayer saim("Saim Ayub", 63, 38.0);

    // Players playing matches and improving averages
    babar.playMatch(120);
    babar.improveAverage(30).improveAverage(20);

    rizwan.playMatch(85);
    rizwan.improveAverage(25);

    saim.playMatch(5);   // ouch… golden duck vibes
    saim.playMatch(75);  // redemption arc
    saim.improveAverage(40);

    // Display final stats
    cout << "\n?? FINAL PLAYER STATS ??\n" << endl;
    babar.displayPlayerStats();
    rizwan.displayPlayerStats();
    saim.displayPlayerStats();

    return 0;
}

