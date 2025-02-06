/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:23:51 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 14:52:20 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie(); // Default constructor
	Zombie(const std::string& zombieName); // Parametrized constructor 
	Zombie(const Zombie& other); // Copy constructor
	Zombie& operator=(const Zombie& other); // Copy assignment operator
	~Zombie(); // Destructor

	void announce();
};

Zombie* newZombie(const std::string& name);
void randomChump(const std::string& name);

#endif
