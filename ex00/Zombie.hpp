/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <christian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:23:51 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 02:56:30 by christian        ###   ########.fr       */
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
	explicit Zombie(const std::string& zombieName);
	~Zombie();	
	void announce(void);
};

Zombie* newZombie(const std::string& name);
void randomChump(const std::string& name);

#endif
