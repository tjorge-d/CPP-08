#include "Span.hpp"

int main()
{
	Span a(10);
	try
	{
		for(int i = 1; i < 100; i++)
		{
			a.addNumber(i);
			a.print();
			std::cout << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	a.print();
	std::cout << std::endl << "Longest span = " << a.longestSpan() << std::endl;

}