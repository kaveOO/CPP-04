/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kave0 <kave0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 04:52:27 by kave0             #+#    #+#             */
/*   Updated: 2025/02/17 04:59:49 by kave0            ###   ########.fr       */
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
}

Character::Character(std::string name)
{
	this->name = name;
	for (size_t i = 0; i < 4; i++)
	{
		this->gear[i] = NULL;
	}
}

Character::Character(const Character &copy)
{
	this->name = copy.name;
	for (size_t i = 0; i < 4; i++)
	{
		this->gear[i] = copy.gear[i] // TODO add clone out here
	}
}

// Destructor(s)

Character::~Character()
{
	for (size_t i = 0; i < 4; i++)
	{
		delete gear[i];
	}
}
