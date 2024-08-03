/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-utils.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:06:34 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:06:35 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test-utils.hpp"

void test::display(const char *text, const char *color)
{
    std::cout << color << text << COLOR_END << std::endl;
}

void test::display_success(const char *text)
{
    std::cout << "  ";
    std::cout << BLUE << text
              << GREEN << " OK"
              << COLOR_END << std::endl;
}

Request         test::simulateReq(RequestMap &reqMap, int fd)
{
    while (!reqMap.getRequest(fd).isComplete())
    {
        try {
            reqMap.parseReqFrom(fd);
        } catch (const Error &error) {
            reqMap.getRequest(fd).error = error;
            break;
        }
    }

    return reqMap.getRequest(fd);
}

void            test::closeFd(int fd, RequestMap &reqMap)
{
    reqMap.delReq(fd);
    reqMap.delRsp(fd);
    reqMap.eraseClient(fd);
    close(fd);
}
