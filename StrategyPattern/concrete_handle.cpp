#include "pch.h"
#include <iostream>
#include "concrete_handle.h"


void HiltedHandle :: hold(void) {
	std::cout << "Held with hilted handle\n";
}

void OpenHandle :: hold(void) {
	std::cout << "Held with open handle\n";
}

void RapierHandle :: hold(void) {
	std::cout << "Held with rapier handle\n";
}
