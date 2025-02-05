/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: candrese <candrese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:17:21 by candrese          #+#    #+#             */
/*   Updated: 2025/02/05 20:49:02 by candrese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void	replacer(std::string buffer, char *dest, char *src, std::ofstream &out);

#endif
