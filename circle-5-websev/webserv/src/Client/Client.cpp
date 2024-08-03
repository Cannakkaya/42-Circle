/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:02:32 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:02:32 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Client.hpp"

Client::Client(const std::string &ip, size_t &port, int socket):
ip(ip), port(port), socket(socket)
{
}

Client::Client(void)
{
}

Client::Client(const Client &src)
{
    *this = src;
}

Client::~Client()
{
}

Client &Client::operator=(const Client &rhs)
{
    if (this != &rhs)
    {
		this->ip = rhs.ip;
		this->port = rhs.port;
        this->socket = rhs.socket;
    }

    return (*this);
}
