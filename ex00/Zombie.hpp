/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:23:51 by candrese          #+#    #+#             */
/*   Updated: 2025/02/04 16:23:14 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string name;
	inline static size_t total_zombies = 0;

public:
	explicit Zombie(const std::string& zombieName);
	~Zombie();	
	void announce(void);
	static size_t getZombieCount();
};

Zombie* newZombie(const std::string& name);
void randomChump(const std::string& name);

#endif
