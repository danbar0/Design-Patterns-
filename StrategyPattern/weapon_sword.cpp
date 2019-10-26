#include "weapon_sword.h"

Sword::Sword(void) {

}

Sword ::~Sword(void){

}

void Sword::setHandleBehavior(HandleBehavior* behavior) {
	handleBehavior = behavior; 
}

void Sword::setBladeBehavior(BladeBehavior* behavior) {
	bladeBehavior = behavior;
}

void Sword::attack(void) {
	bladeBehavior->cut(); 
	handleBehavior->hold(); 
}