#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <list>

#include "ATarget.hpp"

class	TargetGenerator
{
	private:
		std::list<ATarget *>	targets;

		TargetGenerator(TargetGenerator const & src);
		TargetGenerator &	operator=(TargetGenerator const & rhs);

	public:
		TargetGenerator();
		~TargetGenerator();

		void		learnTargetType(ATarget * target);
		void		forgetTargetType(std::string const & name);
		ATarget *	createTarget(std::string const & name);
};


#endif
