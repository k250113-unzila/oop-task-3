#include <iostream>
#include <string>
using namespace std;

class FootballPlayer {
private:
    string playerName;
    string position;
    int goalCount;

public:
    // 1. Default constructor
    FootballPlayer() {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    // 2. Constructor with default arguments
    FootballPlayer(string name, string pos = "Midfielder", int goals = 10) {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    // 3. Copy constructor
    FootballPlayer(const FootballPlayer &other) {
        playerName = other.playerName;
        position = other.position;
        goalCount = other.goalCount;
    }

    // Increase goal count
    void scoreGoals(int goals) {
        goalCount += goals;
    }

    // Display player details
    void displayPlayer() const {
        cout << "Player Name: " << playerName << endl;
        cout << "Position: " << position << endl;
        cout << "Goals Scored: " << goalCount << endl;
        cout << "Status: Ready for the Ballon d’Or ??" << endl;
        cout << "-------------------------------" << endl;
    }
};

int main() {
    // Default constructor
    FootballPlayer p1;
    p1.displayPlayer();

    // Constructor with all values
    FootballPlayer p2("CR7", "Forward", 820);
    p2.scoreGoals(5);
    p2.displayPlayer();

    // Constructor with default arguments
    FootballPlayer p3("Kevin De Bruyne");
    p3.scoreGoals(3);
    p3.displayPlayer();

    // Copy constructor
    FootballPlayer p4(p2);
    p4.scoreGoals(10);
    p4.displayPlayer();

    return 0;
}


