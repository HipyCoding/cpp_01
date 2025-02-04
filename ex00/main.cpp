/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:23:29 by candrese          #+#    #+#             */
/*   Updated: 2025/02/04 16:15:40 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<Zombie> heapZombie = std::unique_ptr<Zombie>(newZombie("Heapeater"));
	heapZombie->announce();
	randomChump("Stackeater");
	return 0;
}
