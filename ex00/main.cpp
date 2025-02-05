/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <christian@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:23:29 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 02:55:16 by christian        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::unique_ptr<Zombie> heapZombie = std::unique_ptr<Zombie>(newZombie("Heapeater"));
	heapZombie->announce();
	randomChump("Stackeater");
	return 0;
}
