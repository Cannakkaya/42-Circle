/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testUtils.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:59:19 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 16:59:20 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testUtils.hpp"

void display(const char *text, const char *color)
{
    std::cout << color << text << COLOR_END << std::endl;
}

void display_success(const char *text)
{
    std::cout << "  ";
    std::cout << COLOR_BLUE << text
              << COLOR_GREEN << " OK"
              << COLOR_END << std::endl;
}