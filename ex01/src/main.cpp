/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:28:08 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/03 20:23:31 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "--- Construction (Check Chaining) ---" << std::endl;
    ScavTrap robot("Serena"); // HP: 100, Energy: 50, Dmg: 20

    std::cout << "\n--- Testing Actions ---" << std::endl;
    // Doit afficher le message spécifique de ScavTrap, pas celui de ClapTrap
    robot.attack("Target_A"); 
    
    // Fonctions héritées de ClapTrap
    robot.takeDamage(10);
    robot.beRepaired(10); 

    std::cout << "\n--- Testing Special Capacity ---" << std::endl;
    robot.guardGate(); // Mode Gate Keeper

    std::cout << "\n--- Destruction (Check Chaining) ---" << std::endl;
    return (0);
}