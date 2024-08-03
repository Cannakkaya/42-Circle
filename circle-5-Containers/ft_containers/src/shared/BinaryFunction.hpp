/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BinaryFunction.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:57:30 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 16:57:30 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BINARYFUNCTION_HPP
#define BINARYFUNCTION_HPP

// http://www.cplusplus.com/reference/functional/binary_function/

namespace ft
{

template <class Arg1, class Arg2, class Result>
struct BinaryFunction
{
    typedef Arg1 first_argument_type;
    typedef Arg2 second_argument_type;
    typedef Result result_type;
};
} // namespace ft

#endif