#include "utils.hpp"
#include <cctype>

bool	isValidNumber(std::string number)
{
	size_t i = 0;
	while (i < number.length() && std::isspace(number[i]))
		i++;
	while (i < number.length() && !std::isdigit(number[i]))
	{
		if (number[i] != '-' && number[i] != '+')
			return (false);
		i++;
	}
	if (i == number.length())
		return (false);
	while (i < number.length())
	{
		if (!std::isdigit(number[i]))
			return (false);
		i++;
	}
	return (true);
}
