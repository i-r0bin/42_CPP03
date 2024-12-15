/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <rilliano@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:24:33 by rilliano          #+#    #+#             */
/*   Updated: 2024/12/15 20:29:07 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    ClapTrap claptrap("Pino");
    ScavTrap scavtrap("Sweghy");
    FragTrap fragtrap("Freddy");
    DiamondTrap diamondtrap("Diego");

    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("target2");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    scavtrap.attack("target3");
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();

    fragtrap.attack("target4");
    fragtrap.takeDamage(30);
    fragtrap.beRepaired(20);
    fragtrap.highFivesGuys();

    diamondtrap.attack("target5");
    diamondtrap.takeDamage(40);
    diamondtrap.beRepaired(30);
    diamondtrap.whoAmI();

    return 0;
}
