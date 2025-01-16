#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stdio.h>
# include <iostream>
# include <string.h>
# include <fstream>
# include <deque>
# include <stack>

template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &a);
		~MutantStack();
		MutantStack&	operator=(const MutantStack &copy);

		typedef typename std::deque<T>::iterator	iterator;
		iterator	begin();
		iterator	rbegin();
		iterator	end();
		iterator	rend();
};

# include "MutantStack.tpp"

#endif