#include "Professions.h"
#include <string>

Professions::Professions()
{
}


Professions::~Professions()
{
}

std::string Professions::getNameProfession(professions _profession)
{
	switch (_profession)
	{
	case alchemist:
		return "alchemist";
	case armourer:
		return "armourer";
	case bandit:
		return "bandit";
	case blacksmith:
		return "blacksmith";
	case councillor:
		return "councillor";
	case dockworker:
		return "dockworker";
	case farmer:
		return "farmer";
	case guard:
		return "guard";
	case herbalist:
		return "herbalist";
	case hunter:
		return "hunter";
	case innkeeper:
		return "innkeeper";
	case mayor:
		return "mayor";
	case merchant:
		return "merchant";
	case priest:
		return "priest";
	case smuggler:
		return "smuggler";
	case unemployed:
		return "unemployed";
	}
	return nullptr;
}