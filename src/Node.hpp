#ifndef NODE_HPP
#define NODE_HPP

#include "ModifierStack.hpp"

class Node {
public:
	Node();

private:
	ModifierStack modifiers_;
};

#endif //NODE_HPP
