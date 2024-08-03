/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:00:13 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:00:14 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./test-utils/testUtils.hpp"

int main()
{

    test_iterators();
    test_pair();
    test_list();
    test_vector();
    test_red_black_tree();
    test_map();
    test_stack();
    test_queue();

    test_multimap();
    test_set();
    test_multiset();

    return (0);
}
