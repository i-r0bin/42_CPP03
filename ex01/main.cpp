/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rilliano <rilliano@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:33:35 by rilliano          #+#    #+#             */
/*   Updated: 2024/12/14 19:33:36 by rilliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap claptrap("Pino");
    ScavTrap scavtrap("Sweghy");

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

    return 0;
}
