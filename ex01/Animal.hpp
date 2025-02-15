/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 05:48:07 by albillie          #+#    #+#             */
/*   Updated: 2025/02/15 08:22:46 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string type;
		std::string noise;
		Animal &operator=(const Animal &Assign);
		Animal();
	public:
		// Constructor(s)
		Animal();
		Animal(const Animal &Animal);
		// Destructor(s)
		virtual ~Animal();
		// Overload Operator(s)
		Animal &operator=(const Animal &Assign);
		// Getter(s)
		std::string getType() const;
		// Function(s)
		virtual void makeSound() const;
};
