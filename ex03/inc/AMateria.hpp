/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:20:42 by albillie          #+#    #+#             */
/*   Updated: 2025/02/16 02:55:17 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		// Attribute(s)
		std::string type;
	public:
		// Constructor(s)
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &src);
		// Destructor(S)
		~AMateria();
		// Overload Operator(s)
		AMateria &operator=(const AMateria &assign);
		// Getter(S)
		std::string const &getType() const;
		// Other Function(s)
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

