/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:31:19 by graja             #+#    #+#             */
/*   Updated: 2022/02/17 10:11:26 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Constructors
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitpts = 100;
	this->_energypts = 50;
	this->_attckdmg = 20;
	std::cout << _hitpts << ", " << _energypts << ", ";
	std::cout << _attckdmg << std::endl;
	std::cout << std::endl;
}
		
ScavTrap::ScavTrap(std::string const name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called with name, " << name << std::endl;
	this->_hitpts = 100;
	this->_energypts = 50;
	this->_attckdmg = 20;
	std::cout << _hitpts << ", " << _energypts << ", ";
	std::cout << _attckdmg << std::endl;
	std::cout << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->_hitpts = 100;
	this->_energypts = 50;
	this->_attckdmg = 20;
	std::cout << _hitpts << ", " << _energypts << ", ";
	std::cout << _attckdmg << std::endl;
	std::cout << std::endl;
}

//Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	std::cout << this->_name << " says good bye" << std::endl;
	std::cout << std::endl;
}

//Operator overload for '='
ScavTrap&	ScavTrap::operator=(const ScavTrap  &ovr)
{
	this->_name = ovr._name;
	this->_hitpts = ovr._hitpts;
	this->_energypts = ovr._energypts;
	this->_attckdmg = ovr._attckdmg;
	return (*this);
}

//Member functions
void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap Gate keeper mode" << std::endl;
	std::cout << this->_name << " entered gate keeper mode!" << std::endl;
	std::cout << std::endl;
}
