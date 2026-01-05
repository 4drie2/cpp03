/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 17:04:42 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/05 17:06:59 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->_energyPoints == 0 || this->_hitPoints == 0)
    {
        std::cout << "FragTrap " << this->_name << " has no energy or hit points left to attack." << std::endl;
        return;
    }
    this->_energyPoints--;
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " requests a high five!" << std::endl;
}