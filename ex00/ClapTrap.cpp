/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <rilliano@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:45:46 by rilliano          #+#    #+#             */
/*   Updated: 2024/12/14 19:10:38 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to attack." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    hitPoints -= amount;
    if (hitPoints < 0) 
        hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0 && hitPoints > 0) {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " is repaired by " << amount << " points!" << std::endl;
        energyPoints--;
    } else {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to be repaired." << std::endl;
    }
}
