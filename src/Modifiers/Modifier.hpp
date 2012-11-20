#ifndef MODIFIER_HPP
#define MODIFIER_HPP

#include "Modifier.hpp"

#include <vector>

namespace Modifier {

class Modifier {

public:
	Modifier(Node* associated_node);
	virtual ~Modifier();

	virtual void evaluate() = 0;

private:
	Node* associated_node_;

};

}

#endif //MODIFIER_HPP
