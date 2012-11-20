#ifndef MODIFIERSTACK_HPP
#define MODIFIERSTACK_HPP

#include "Modifier.hpp"

#include <vector>

class ModifierStack {
public:
	ModifierStack();

private:
	std::vector<Modifier> modifiers_;
};

#endif //MODIFIERSTACK_HPP

