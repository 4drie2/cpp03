/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:28:08 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/05 16:53:54 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/FragTrap.hpp"

int main(void)
{
    std::cout << "--- FragTrap Construction ---" << std::endl;
    // Doit afficher ClapTrap constructor puis FragTrap constructor
    FragTrap robot("Unit-01"); 

    std::cout << "\n--- Testing Actions (FragTrap Stats) ---" << std::endl;
    // Attaque : FragTrap a 30 d'attaque (vs 20 pour ScavTrap, 0 pour ClapTrap)
    robot.attack("Target_B"); 
    
    // Test des PV et de l'Héritage (100 HP initialement)
    robot.takeDamage(20); // Reste 80 HP
    robot.beRepaired(10); // Remonte à 90 HP

    std::cout << "\n--- Testing Special Capacity ---" << std::endl;
    // Spécifique à l'ex02 : demande un high five
    robot.highFivesGuys();

    std::cout << "\n--- Destruction ---" << std::endl;
    // L'ordre inverse : FragTrap destructor puis ClapTrap destructor
    return (0);
}