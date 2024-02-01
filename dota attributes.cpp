#include <iostream>
using namespace std;

class attributes{
	public:
		
		string name;
		string type;
		string complexity;
		string tags;
		string lane;
		
	attributes(string heroName, string heroType, string heroComplexity, string heroTags){
		name = heroName;
		type = heroType;
		complexity  = heroComplexity;
		tags = heroTags;
		
		
	}
	
	void setname(string heroName){
		
		
	}
		
		
		
};
int main()
{
	//strenght Heroes
	attributes hero1("Alchemist", "Carry/support strenght", "Low Complexity", "(Melee, Durable, Disabler, initiator and nuker)");
	
	attributes hero2("Axe", "Carry strenght", "Low Complexity", "(Melee, initiator, durable and disabler)");
	
	attributes hero3("BristleBack", "Carry strenght", "Low Complexity", "(Melee, initiator, durable and Nuker)");
	
	attributes hero4("Centaur Warrunner", "Carry strenght", "Low Complexity", "(Melee, initiator, durable, disabler, nuker and escape)");
	
	attributes hero5("Chaos Knight", "Carry strenght", "Low Complexity", "(Melee, pusher, initiator, durable, and disabler)");
	
	attributes hero6("Dawn Breaker", "Carry strenght", "Low Complexity", "(Melee and durable)");
	
	attributes hero7("Doom", "Carry strenght", "Moderate Complexity", "(Melee, initiator, durable, disabler and Nuker)");
	
	attributes hero8("Dragon Knight", "Carry strenght", "Low Complexity", "(Melee, Pusher, durable, disabler, initiator, and Nuker)");
	
	attributes hero9("Earth Spirit", "Support strenght", "High Complexity", "(Melee, initiator, durable, disabler, escape and Nuker)");
	
	attributes hero10("Earth Shaker", "Support strenght", "Moderate Complexity", "(Melee, initiator, disabler, and Nuker)");
	
	attributes hero11("Elder Titan", "Carry/support strenght", "Moderate Complexity", "(Melee, initiator, durable, disabler and Nuker)");
	
	attributes hero12("Huskar", "Carry strenght", "Low Complexity", "(Range, initiator and durable)");
	
	attributes hero13("Kunkka", "Carry/support strenght", "Moderate Complexity", "(Melee, initiator, durable, disabler, disabler and Nuker)");
	
	attributes hero14("Legion Commander", "Carry strenght", "Low Complexity", "(Melee, initiator, durable, disabler and Nuker)");
	
	attributes hero15("Lifestealer", "Carry strenght", "Moderate Complexity", "(Melee, durable, Escape and disabler)");
	
	attributes hero16("Mars", "Carry strenght", "Low Complexity", "(Melee, initiator, durable, disabler)");
	
	attributes hero17("Night stalker", "Carry strenght", "Low Complexity", "(Melee, initiator, durable, disabler and Nuker)");
	
	attributes hero18("Ogre magi", "Support strenght", "Low Complexity", "(Melee, initiator, durable, disabler and Nuker)");
	
	attributes hero19("Omni Knight", "Support strenght", "Low Complexity", "(Melee, durable and Nuker)");
	
	attributes hero20("Primal Beast", "Carry strenght", "Low Complexity", "(Melee, initiator, durable and disabler)");
	
	attributes hero21("Pudge", "Carry/Support strenght", "Moderate Complexity", "(Melee, initiator, durable, disabler and Nuker)");
	
	attributes hero22("Slardar", "Carry strenght", "Low Complexity", "(Melee, initiator, durable, disabler, and escape)");
	
	attributes hero23("Spirit Breaker", "Carry/Support strenght", "Low Complexity", "(Melee, initiator, durable, disabler and escape)");
	
	attributes hero24("Sven", "Carry strenght", "Low Complexity", "(Melee, initiator, durable, disabler and nuker)");
	
	attributes hero25("Tide Hunter", "Carry strenght", "Low Complexity", "(Melee, initiator, durable and disabler)");
	
	attributes hero26("Tiny", "Carry strenght", "Moderate Complexity", "(Melee, initiator, durable, disabler, Pusher and Nuker)");
	
	attributes hero27("Treant Protector", "Support strenght", "Moderate Complexity", "(Melee, initiator, durable, disabler and Escape)");
	
	attributes hero28("Tusk", "Carry/Support strenght", "Low Complexity", "(Melee, initiator, Nuker, and disabler)");
	
	attributes hero29("Underlord", "Support/carry strenght", "Moderate Complexity", "(Melee, Nuker, durable, disabler and Escape)");
	
	attributes hero30("Undying", "Support strenght", "Low Complexity", "(Melee, Nuker, durable, and disabler)");
	
	attributes hero31("Wraith King", "Carry/support strenght", "Low Complexity", "(Melee, initiator, durable, disabler)");
	
	
	return 0;
}
