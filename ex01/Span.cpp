#include "Span.hpp"

// CONSTRUCTORS & DESTRUCTORS

Span::Span()
{
	//std::cout << "Span default constructor called\n";
	_vec.reserve(0);
}

Span::Span(unsigned int N)
{
	//std::cout << "Span default constructor called\n";
	_vec.reserve(N);
}

Span::Span(const Span &copy)
{
	//std::cout << "Span copy constructor called\n";
	*this = copy;
}

Span::~Span()
{
	std::cout << "Span default destructor called\n";
}

// GETTERS


// SETTERS


// OPERATORS

Span&	Span::operator=(const Span &copy)
{
	std::cout << "Span copy assignment operator called\n";
	//_example = copy._example;
	(void)copy;
	return (*this);
}

// MEMBER FUNCTIONS

void	Span::addNumber(int n)
{
	if (_vec.size() != _vec.capacity())
		_vec.push_back(n);
	else
		throw MaxCapacityReached();
}

void	Span::print()
{
	for (unsigned long i = 0; i < _vec.size(); i++)
        std::cout << _vec[i] << " ";
}

int		Span::shortestSpan()
{
	if (_vec.size() < 2)
		throw LessThanTwoNumbers();
	
}

int		Span::longestSpan()
{
	if (_vec.size() < 2)
		throw LessThanTwoNumbers();
	return (*std::max_element(_vec.begin(), _vec.end()) - *std::min_element(_vec.begin(), _vec.end()));
}

const char*	Span::MaxCapacityReached::what() const throw()
{
	return ("The vector has already reached the max capacity");
}

const char*	Span::LessThanTwoNumbers::what() const throw()
{
	return ("The vector has less than two numbers");
}
