/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 03:50:24 by albillie          #+#    #+#             */
/*   Updated: 2025/02/16 04:40:15 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		// Constructor(s)
		Ice();
		Ice(const Ice &src);
		// Destructor(s)
		~Ice();
		// Overloard Operator(s)
		Ice &operator=(const Ice &assign);
		// Other(s) Function(s)
		AMateria *clone() const;
		void use(ICharacter &target);
};
