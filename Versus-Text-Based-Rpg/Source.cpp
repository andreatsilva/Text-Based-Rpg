#include <iostream>
#include <vector>
#include <fstream>
#include <string>


using namespace std;

// Player Struct
struct Player {
	
	string name;
	string playerClass;
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


void  Class() {


}

//
int main() {

	Player player;
	int choice;

	do {
		Menu();
		cout << "Enter Choice";
		cin >> choice;

		switch (choice) {
			case 1:
				characterCreation(player);
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