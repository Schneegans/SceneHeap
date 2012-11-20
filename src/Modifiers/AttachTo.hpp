/*
 * AttachTo.hpp
 *
 *  Created on: 20.11.2012
 *      Author: simon
 */

#ifndef ATTACHTO_HPP_
#define ATTACHTO_HPP_

namespace Modifier {

class AttachTo: public Modifier {
public:
	AttachTo();

	void evaluate();

private:
	Node* target_;
};

}

#endif /* ATTACHTO_HPP_ */
