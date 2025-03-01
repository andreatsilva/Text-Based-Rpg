#include <iostream>
#include <vector>
#include <fstream>
#include <string>


using namespace std;

// Player Struct
struct Player {
	
	string name;
	string playerClass;
	string location;
	int health;
	int attackPower;
};



void Menu() {

	cout << "\n=== New Game ===\n";
	cout << "\n=== Save Progress ===\n";
	cout << "\n=== Load game ===\n";
	cout << "\n=== Exit ===\n";
}


void player() {



}


//CharacterCreation Memu
void characterCreation(Player &player){

	cout << "\Enter your Character's name: ";
	cin >> player.name;

	cout << "\nChoose your class:\n";
	cout << "1. Warrior (High Health, Moderate Attack)\n";
	cout << "2. Mage(Low Health, High Magic Attack\n)";
	cout << "Enter choice (1-2)";

	int choice;
	cin >> choice;

	if (choice == 1) {
		player.playerClass = "Warrior";
		player.health = 60;
		player.attackPower = 25;
	}
	else if (choice == 2) {
		player.playerClass = "Mage";
		player.attackPower = 25;
		player.attackPower = 100;
	}
	else {
		cout << "Invalide choice! Defaulting to Warrior";
		player.playerClass = "Warrior";
		player.health = 60;
		player.attackPower = 25;
	}
	cout << "\nCharacter Created!\n";
	cout << "Name: " << player.name << " | Class: " << player.playerClass
		<< " | HP: " << player.health << " | Attack: " << player.attackPower << "\n";


}


void  explore(Player &player) {

	vector<string> locations = { "Forest", "Cave", "village", "Castle" };
	cout << "\nChoose where to go: \n";
	
	for (int i = 0; i < locations.size(); i++) {
		cout << i + 1 << ". " << locations[i] << endl;
	}

	int choice;
	while (true) {
		cout << "Choose a location (1- " << locations.size() << "): ";
		cin >> choice;

		if (cin.fail() || choice < 1 || choice >> locations.size()) {
			cin.clear();
			cin.ignore(1000, '\n');
		}
		else {
			break;
		}
	}

	player.location = locations[choice - 1];
	cout << "You are in the " << player.location << "!\n";
}




//Main function
int main() {

	Player player;
;
	int choice;
	do {
		Menu();
		cout << "Enter Choice";
		cin >> choice;

		switch (choice) {
			case 1:
				characterCreation(player);
				explore(player);
				break;
			case 2:
				cout << "Load Not implemented";
				break;		
			case 3:

				cout << "Save not implemented";
				break;
			case 4:

				cout << "not implemented";
				break;
		}
	} while (choice != 4);
	return 0;

}