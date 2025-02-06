/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:26:29 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 14:55:28 by candrese         ###   ########.fr       */
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
public:
	Zombie();
	Zombie(const std::string& zombieName);
	Zombie(const Zombie& other);
	Zombie& operator=(const Zombie& other);
	~Zombie();

	void announce();
	void setName(const std::string& zombieName);
};

Zombie* zombieHorde(int N, std::string name);

#endif
