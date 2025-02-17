/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:20:42 by albillie          #+#    #+#             */
/*   Updated: 2025/02/16 04:21:59 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	protected:
		// Attribute(s)
		std::string type;
	public:
		// Constructor(s)
		AMateria();
		AMateria(std::string const &type);
		// Destructor(S)
		~AMateria();
		// Getter(S)
		std::string const &getType() const;
		// Other Function(s)
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

