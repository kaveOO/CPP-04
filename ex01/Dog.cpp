/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 06:02:36 by albillie          #+#    #+#             */
/*   Updated: 2025/02/15 08:25:13 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor(s)
Dog::Dog() : Animal()
{
	std::cout << "Dog -> Have just been constructed" << std::endl;
	type = "Dog";
	noise = "Woof";
	brain = new Brain();
}

Dog::Dog(const Dog &Dog) : Animal()
{
	std::cout << "Dog -> Have just been copied" << std::endl;
	type = Dog.type;
}

// Destructor(s)
Dog::~Dog()
{
	delete brain;
	std::cout << "Dog -> Have just been destroyed" << std::endl;
}

// Overload Operator(S)
Dog &Dog::operator=(const Dog &Assign)
{	
	std::cout << "Dog -> Have just been assigned" << std::endl;
	type = Assign.type;
	Animal::operator=(Assign);
	brain = new Brain(*Assign.brain);
	return (*this);
}

// Function(s)
void Dog::makeSound() const
{
	std::cout << this->noise << std::endl;
}
