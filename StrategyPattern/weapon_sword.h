#pragma once
#include "concrete_blade.h"
#include "concrete_handle.h"

class Sword {
public:
	HandleBehavior * handleBehavior;
	BladeBehavior * bladeBehavior;

	Sword(void);
	~Sword(void); 

	void setHandleBehavior(HandleBehavior* behavior); 
	void setBladeBehavior(BladeBehavior* behavior); 
	void attack();

private:
};