/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 20:16:09 by candrese          #+#    #+#             */
/*   Updated: 2025/02/06 15:48:16 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef HARL_H
# define HARL_H

class	Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		Harl();
		Harl(const Harl& other);
		~Harl(void);
		Harl& operator=(const Harl& other);

		void	complain(std::string level);
};

typedef void (Harl::*MethodPtr) (void);

#endif
