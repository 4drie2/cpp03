/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:28:08 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/03 19:33:17 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* */
/* :::      ::::::::   */
/* main.cpp                                           :+:      :+:    :+:   */
/* +:+ +:+         +:+     */
/* By: Gemini                                     +#+  +:+       +#+        */
/* +#+#+#+#+#+   +#+           */
/* Created: 2025/01/03 19:30:00 by Gemini            #+#    #+#             */
/* Updated: 2025/01/03 19:30:00 by Gemini           ###   ########.fr       */
/* */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n--- TEST 1: Construction ---" << std::endl;
    // Création d'un ClapTrap nommé "Bobby"
    // [cite: 125] Name passed as parameter
    ClapTrap robot("Bobby");

    std::cout << "\n--- TEST 2: Attack & Energy Consumption ---" << std::endl;
    // Le sujet précise que l'attaque coûte 1 point d'énergie[cite: 134].
    // Bobby a 10 points d'énergie au départ[cite: 127].
    // Faisons-le attaquer une cible fictive.
    robot.attack("Target_Dummy");
    robot.attack("Target_Dummy");
    robot.attack("Target_Dummy");

    std::cout << "\n--- TEST 3: Taking Damage ---" << std::endl;
    // Bobby prend des dégâts. HP initial = 10[cite: 126].
    robot.takeDamage(5); // HP devrait tomber à 5.
    robot.takeDamage(2); // HP devrait tomber à 3.

    std::cout << "\n--- TEST 4: Repairing ---" << std::endl;
    // La réparation coûte 1 point d'énergie [cite: 134] et rend des HP.
    robot.beRepaired(5); // HP devrait remonter à 8 (3 + 5).

    std::cout << "\n--- TEST 5: Running out of Energy ---" << std::endl;
    // Bobby a déjà utilisé de l'énergie pour 3 attaques et 1 réparation (Total: 4).
    // Il lui reste 6 points d'énergie. Consommons le reste.
    for (int i = 0; i < 6; i++)
        robot.attack("Spam_Target");
    
    // À ce stade, Energie = 0. La prochaine action doit échouer.
    std::cout << ">> Trying to attack with 0 Energy:" << std::endl;
    robot.attack("Fail_Target");
    
    std::cout << ">> Trying to repair with 0 Energy:" << std::endl;
    robot.beRepaired(5);

    std::cout << "\n--- TEST 6: Death and Actions ---" << std::endl;
    // Créons un nouveau robot pour tester la mort.
    ClapTrap robot2("Kenny");
    
    // Tuons Kenny (HP = 10 -> Dégâts = 15).
    robot2.takeDamage(15); 

    // Kenny est à 0 HP. Il ne devrait rien pouvoir faire.
    std::cout << ">> Kenny tries to attack while dead:" << std::endl;
    robot2.attack("Killer");
    
    std::cout << ">> Kenny tries to repair while dead:" << std::endl;
    robot2.beRepaired(10);

    std::cout << "\n--- TEST 7: Destruction ---" << std::endl;
    // Les destructeurs doivent être appelés ici (message attendu).
    
    return (0);
}