/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 14:02:52 by graja             #+#    #+#             */
/*   Updated: 2022/02/12 16:16:08 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	test;
	ClapTrap	lala("LaLa");
	ClapTrap	lolo = test;

	test.attack("LaLa");
	lala.takeDamage(5);
	lala.beRepaired(2);
	lolo.takeDamage(9);
	return (0);
}
