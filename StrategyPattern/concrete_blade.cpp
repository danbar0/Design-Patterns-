#include "pch.h"
#include <iostream>
#include "concrete_blade.h"

void CurvedBlade :: cut(void) {
	std::cout << "Slashed with curved blade\n";
}

void LongBlade :: cut(void) {
	std::cout << "Slashed with long blade\n";
}

void ShortBlade :: cut(void) {
	std::cout << "Slashed with short blade\n";
}
