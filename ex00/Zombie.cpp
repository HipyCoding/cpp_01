/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:23:48 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 14:47:24 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// constructor to initiate an Object with default values
	// Zombie random; || initializes a random Zombie with name "unnamed", since we did not give it a name
Zombie::Zombie() : name("unnamed") {}

// Parameterized constructor used to initiate an Object with assigned values
	// Zombie alice("Alice"); || initializes a Zombie with name Alice
Zombie::Zombie(const std::string& zombieName) : name(zombieName) {}

// Copy constructor to initiate an Object with is a copy of an allready existing one
	// Zombie alice("Alice");
	// Zombie bob(alice); || bob is created as a copy of alice
	Zombie::Zombie(const Zombie& other) : name(other.name) {}

// Copy assignment operator to copy the values of an Object into one which allready exists
	// Zombie bob("Bob");
	// Zombie alice("Alice");
	// bob = alice; || Now bob's name changed "Alice"
Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other) {
		name = other.name;
	}
	return *this;
}

// Destructor
Zombie::~Zombie()
{
	std::cout << name << " is hit by destructor" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
