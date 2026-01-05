/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:28:08 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/03 20:51:01 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main(void)
{
    // Instance 1 : Test du cycle normal et de l'épuisement d'énergie
    std::cout << "--- Robot A (Energy Test) ---" << std::endl;
    ClapTrap a("Alpha");

    a.takeDamage(5);    // Test dégâts
    a.beRepaired(5);    // Test soin (-1 Energie)
    
    // Boucle pour vider l'énergie (10 points initiaux)
    // On a déjà utilisé 1 pt pour le soin. On attaque 9 fois pour vider, la 10ème échouera.
    for (int i = 0; i < 10; i++)
        a.attack("Target"); 
    a.beRepaired(1);    // Doit échouer (0 Energie)

    // Instance 2 : Test de la mort (0 HP)
    std::cout << "\n--- Robot B (Death Test) ---" << std::endl;
    ClapTrap b("Beta");

    b.takeDamage(15);   // Dégâts mortels (HP > 0 -> 0)
    b.attack("Ghost");  // Doit échouer (Mort)
    b.beRepaired(5);    // Doit échouer (Mort)

    std::cout << "\n--- Destructors ---" << std::endl;
    return (0);
}