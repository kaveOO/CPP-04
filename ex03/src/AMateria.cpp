/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:20:26 by albillie          #+#    #+#             */
/*   Updated: 2025/02/16 03:23:57 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructor(s)
AMateria::AMateria()
{
	std::cout << "AMateria -> Default constructor has been called" << std::endl;
	type = "Default";
}

AMateria::AMateria(std::string const &newType)
{
	std::cout << "AMateria -> String constructor has been called" << std::endl;
	type = newType;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "AMateria -> Copy constructor has been called" << std::endl;
	type = src.type;
}

// Destructor(S)
AMateria::~AMateria()
{
	std::cout << "AMateria -> Destructor has been called" << std::endl;
}

// Overload Operator(s)
AMateria &AMateria::operator=(const AMateria &assign)
{
	std::cout << "AMateria -> Overload assignment operator has been called" << std::endl;
	type = assign.type;
	return (*this);
}

// Getter(S)
std::string const &AMateria::getType() const
{
	return (type);
}

// Other Function(s)
void AMateria::use(ICharacter &target)
{

}
