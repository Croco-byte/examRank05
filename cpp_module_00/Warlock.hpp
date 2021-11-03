#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class	Warlock
{
	private:
		Warlock();
		Warlock(Warlock const & src);
		Warlock & operator=(Warlock const & rhs);

		std::string	name;
		std::string	title;
	
	public:
		Warlock(std::string const & iname, std::string const & ititle);
		~Warlock();

		void			introduce(void)	const;

		std::string const &	getName(void)	const;
		std::string const &	getTitle(void)	const;

		void			setTitle(std::string const & new_title);
};



#endif
