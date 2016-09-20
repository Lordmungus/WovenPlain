#include <iostream>
#include <string>
#include <sstream>
#include "Villager.h"
#include "City.h"
#include "Player.h"
using namespace std;

int main()
{
	Player* player = new Player();
	string res;
	cout << "Enter a valid name: " << endl;
	getline(cin, res);
	player->setName(res);
	cout << player->getName() << endl;
	getchar();
	return 0;
}