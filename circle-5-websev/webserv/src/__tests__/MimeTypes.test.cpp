/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MimeTypes.test.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:01:41 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:01:41 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../test-utils/test-utils.hpp"

static void     test_default_type()
{
    MimeTypes types;

    assert(types.getMimeType("/") == "text/plain");
    assert(types.getMimeType("./") == "text/plain");
    assert(types.getMimeType("./folder/") == "text/plain");
    assert(types.getMimeType("./folder") == "text/plain");

    test::display_success("Default value to text/plain");
}

static void     test_other_types()
{
    MimeTypes types;

    assert(types.getMimeType("./test.json") == "application/json");
    assert(types.getMimeType("test.json") == "application/json");

    assert(types.getMimeType("test.txt") == "text/plain");
    assert(types.getMimeType("test.zip") == "application/zip");
    assert(types.getMimeType("test.mp3") == "audio/mpeg");
    assert(types.getMimeType("test.jpg") == "image/jpeg");
    assert(types.getMimeType("test.jpeg") == "image/jpeg");
    assert(types.getMimeType("test.gif") == "image/gif");

    assert(types.getMimeType("test.css") == "text/css");
    assert(types.getMimeType("test.js") == "application/javascript");


    test::display_success("Some other values");
}


void    test::test_mime_types()
{
    test_default_type();
    test_other_types();
}


