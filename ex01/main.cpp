/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 05:39:26 by albillie          #+#    #+#             */
/*   Updated: 2025/02/15 23:05:27 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.h"

int main()
{
	Animal *animals[4];
	for (size_t i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
		{
			animals[i] = new Cat();
		}
		else
		{
			animals[i] = new Dog();
		}
	}
	for (size_t i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}
	// Dog basic;
	// Dog tmp = basic;
}
