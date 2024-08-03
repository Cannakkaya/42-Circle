/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Less.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:57:52 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 16:57:52 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LESS_HPP
#define LESS_HPP

#include "./BinaryFunction.hpp"

// http://www.cplusplus.com/reference/functional/less/

namespace ft
{

template <class T>
struct Less : public ft::BinaryFunction<T, T, bool>
{
    bool operator()(const T &x, const T &y) const;
};

template <class T>
bool Less<T>::operator()(const T &x, const T &y) const
{
    return x < y;
}

}; // namespace ft

#endif