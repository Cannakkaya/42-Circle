/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:04:44 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:04:44 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_HPP
# define ERROR_HPP

# include <string>

struct Error
{
	Error(const std::string &statusCode, const std::string &description = "", bool eoc = false);
	Error(void);
	~Error();

	std::string statusCode;
	std::string	description;
	bool		endOfConnection;
};




 #endif
