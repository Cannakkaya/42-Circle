/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:06:29 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:06:30 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./test-utils.hpp"

int main()
{
    test::display("=== CONFIG PARSER ===", YELLOW);
    test::test_config_parser();

    test::display("=== REQUEST_MAP ===", YELLOW);
    test::test_request_map();

    test::display("=== REQUEST ===", YELLOW);
    test::test_request();

    test::display("=== Mime Types ===", YELLOW);
    test::test_mime_types();
    
    return (0);
}