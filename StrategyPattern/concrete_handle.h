#pragma once
#include "handleInterface.h"

class HiltedHandle : public HandleBehavior {
public:
	void hold(void);
};

class OpenHandle : public HandleBehavior {
public:
	void hold(void);
};

class RapierHandle : public HandleBehavior {
public:
	void hold(void);
};