/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Client.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:02:39 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:02:39 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_HPP
# define CLIENT_HPP

# include "../headers.hpp"

struct Client
{
        Client(const std::string &ip, size_t &port, int socket);
        Client(void);
        Client(const Client &src);
        ~Client();
        Client	&operator=(const Client &rhs);

		std::string ip;
		size_t		port;
        int         socket;
};


 #endif
