/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kave0 <kave0@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 02:21:17 by albillie          #+#    #+#             */
/*   Updated: 2025/02/18 05:44:03 by kave0            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// Ty Anoteris for the main and took some ideas from him cuz I was struggling on some points
int main()
{
	IMateriaSource* src = new MateriaSource();
	/* Modified this part of the main as it was irrelevant/absurd for learnMateria to have to delete AMateria instance passed as parameter */
	AMateria *ice = new Ice() ;
	AMateria *cure = new Cure() ;
	src->learnMateria(ice);
	src->learnMateria(cure);
	delete ice ;
	delete cure ;

	ICharacter* me = new Character("me");

	/* Same goes here, modified this part of the main as it was irrelevant/absurd for equip to have to delete AMateria instance passed as parameter */
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete tmp ;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(1) ;
	delete tmp ;

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}
