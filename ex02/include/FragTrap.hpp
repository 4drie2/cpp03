/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 16:54:04 by abidaux           #+#    #+#             */
/*   Updated: 2026/01/05 17:06:42 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void    attack(const std::string& target);
        void    highFivesGuys(void);
};