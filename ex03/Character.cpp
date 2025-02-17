/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 04:52:27 by kave0             #+#    #+#             */
/*   Updated: 2025/02/17 21:31:39 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructor(S)
Character::Character()
{
	this->name = "Default";
	for (size_t i = 0; i < 4; i++)
	{
		this->gear[i] = NULL;
	}
	std::cout << "Character created with default constructor" << std::endl;
}

Character::Character(std::string name)
{
	this->name = name;
	for (size_t i = 0; i < 4; i++)
	{
		this->gear[i] = NULL;
	}
	std::cout << "Character created with string constructor" << std::endl;
}

Character::Character(const Character &copy)
{
	this->name = copy.name;
	for (size_t i = 0; i < 4; i++)
	{
		if (copy.gear[i])
		{
			this->gear[i] = copy.gear[i];
		}
	}
	std::cout << "Character has been copied" << std::endl;
}

// Destructor(s)
Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->gear[i])
		{
			delete this->gear[i];
		}
	}
	std::cout << "Character has been destroyed" << std::endl;
}

// Overload Operator(s)
Character &Character::operator=(const Character &assign)
{
	this->name = assign.name;
	return (*this);
}

// Getter(s)
std::string const &Character::getName() const
{
	return (this->name);
}

// Gear Functions

void Character::equip(AMateria *m)
{
	for (size_t i = 0; i < 4; i++)
	{
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 4  && this->gear[idx])
	{
		delete this->gear[idx];
		this->gear[idx] = NULL;
	}
	else if (idx < 0 && idx > 4)
	{
		std::cout << "Invalid index on the inventory" << std::endl;
	}
	else
	{

	}
}
