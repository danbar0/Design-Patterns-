#pragma once
#include "bladeInterface.h"

class CurvedBlade : public BladeBehavior {
public:
	void cut(void);
};

class LongBlade : public BladeBehavior {
public:
	void cut(void);
};

class ShortBlade : public BladeBehavior {
public:
	void cut(void);
};