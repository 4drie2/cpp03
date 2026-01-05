/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 20:53:45 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/05 17:20:21 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap " << name << " created!" <<  std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if (_energyPoints <= 0 || _hitPoints <= 0) {
        std::cout << "ScavTrap " << _name << " has no energy or hit points left to attack." << std::endl;
        return;
    }
    _energyPoints--;
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}