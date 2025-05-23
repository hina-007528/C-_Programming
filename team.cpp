#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    int sequenceNo;
    string name;
    int runs;

    // Default constructor to initialize Player with default values
    Player() : sequenceNo(-1), name(""), runs(0) {}

    // Function to display player details
    void showPlayerDetails() const {
        if (sequenceNo != -1)  // Only show details if player is initialized
            cout << "Player Sequence No: " << sequenceNo << ", Name: " << name << ", Runs: " << runs << endl;
    }
};

class Team {
private:
    Player players[11];  // Array to store details of 11 players

public:
    // Function to add a player to the team
    void add(int seqNo, const string& playerName, int runsMade) {
        if (seqNo >= 1 && seqNo <= 11 && players[seqNo - 1].sequenceNo == -1) {
            players[seqNo - 1] = Player();  // Initialize a new player
            players[seqNo - 1].sequenceNo = seqNo;
            players[seqNo - 1].name = playerName;
            players[seqNo - 1].runs = runsMade;
            cout << "Player " << playerName << " added to position " << seqNo << "." << endl;
        } else {
            cout << "Invalid sequence number or slot already filled!" << endl;
        }
    }

    // Function to show details of all players in the team
    void showAll() const {
        for (int i = 0; i < 11; ++i) {
            players[i].showPlayerDetails();
        }
    }

    // Function to show details of a specific player by sequence number
    void show(int seqNo) const {
        if (seqNo >= 1 && seqNo <= 11) {
            players[seqNo - 1].showPlayerDetails();
        } else {
            cout << "Invalid player sequence number!" << endl;
        }
    }
};

// Example usage of the Team class
int main() {
    Team team;

    // Adding players to the team
    team.add(1, "Player1", 50);
    team.add(3, "Player3", 75);
    team.add(5, "Player5", 120);

    // Displaying details of all players
    cout << "\nAll Players in the Team:" << endl;
    team.showAll();

    // Displaying details of a specific player
    cout << "\nDetails of Player with sequence number 3:" << endl;
    team.show(3);

    // Trying to add a player to an already filled slot
    cout << "\nTrying to add a player to an already filled slot:" << endl;
    team.add(3, "NewPlayer3", 90);

    return 0;
}
