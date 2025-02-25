/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test-utils.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:06:40 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:06:40 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_UTILS_HPP
#define TEST_UTILS_HPP

# include <assert.h>

# include "../headers.hpp"
# include "../ConfigParser/ConfigParser.hpp"
# include "../RequestMap/RequestMap.hpp"
# include "../Response/Response.hpp"
# include "../MimeTypes/MimeTypes.hpp"

# define  CONFIGS_PATH "./src/__tests__/configs/"
# define  REQUESTS_PATH "./src/__tests__/requests/"

namespace test
{
    void                    display(const char *text, const char *color);
    void                    display_success(const char *text);
    void                    closeFd(int fd, RequestMap &reqMap);
    Request                 simulateReq(RequestMap &reqMap, int fd);

    void                    test_config_parser();
    void                    test_request_map();
    void                    test_request();
    void                    test_mime_types();

}

#endif
