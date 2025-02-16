/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 04:57:34 by albillie          #+#    #+#             */
/*   Updated: 2025/02/16 04:57:51 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructor(s)
Cure::Cure() : AMateria("Cure")
{
	std::cout << "Cure -> Default constructor has been constructed" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	std::cout << "Cure -> Copy constructor has been called" << std::endl;
	*this = src;
}

// Destructor(s)
Cure::~Cure()
{
	std::cout << "Cure -> Destructor has been called" << std::endl;
}

// Overloard Operator(s)
Cure &Cure::operator=(const Cure &assign)
{
	std::cout << "Cure -> Overload operator of assignment has been called" << std::endl;
	AMateria::operator=(assign);
	return (*this);
}

// Other(s) Function(s)

AMateria *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	// No content for now
}
