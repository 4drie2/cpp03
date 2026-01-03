/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 18:38:13 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/03 20:22:21 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap " << name << " created!" << std::endl;
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (_energyPoints <= 0 || _hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has no energy or hit points left to attack." << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (amount >= _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Remaining hit points: " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_energyPoints <= 0 || _hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " has no energy or hit points left to repair." << std::endl;
        return;
    }
    _energyPoints--;
    _hitPoints += amount;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " points! New hit points: " << _hitPoints << std::endl;
}