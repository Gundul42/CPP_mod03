/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:02:52 by graja             #+#    #+#             */
/*   Updated: 2022/02/16 17:17:32 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	test;
	DiamondTrap	lala("LaLa");
	DiamondTrap	kuemmel(test);

	lala.attack("LOLO");
	test.attack("TestTrapper");
	test.guardGate();
	test.highFivesGuys();
	return (0);
}
