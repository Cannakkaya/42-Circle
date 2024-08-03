/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:04:38 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:04:39 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Error.hpp"

Error::Error(const std::string &statusCode, const std::string &description, bool eoc) : statusCode(statusCode), description(description), endOfConnection(eoc)
{
};

Error::Error(void) :
	statusCode(), description(), endOfConnection(false)
{

};

Error::~Error()
{
}
