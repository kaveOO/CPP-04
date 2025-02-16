/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 04:24:32 by albillie          #+#    #+#             */
/*   Updated: 2025/02/16 04:50:57 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// Constructor(s)
Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice -> Default constructor has been constructed" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	std::cout << "Ice -> Copy constructor has been called" << std::endl;
	*this = src;
}

// Destructor(s)
Ice::~Ice()
{
	std::cout << "Ice -> Destructor has been called" << std::endl;
}

// Overloard Operator(s)
Ice &Ice::operator=(const Ice &assign)
{
	std::cout << "Ice -> Overload operator of assignment has been called" << std::endl;
	AMateria::operator=(assign);
	return (*this);
}

// Other(s) Function(s)

AMateria *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	// No content for now
}
