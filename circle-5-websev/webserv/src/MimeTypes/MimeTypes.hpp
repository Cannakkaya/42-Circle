/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MimeTypes.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caakkaya <caakkaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:04:56 by caakkaya          #+#    #+#             */
/*   Updated: 2024/08/03 17:04:56 by caakkaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIMETYPES_HPP
# define MIMETYPES_HPP

# include "../headers.hpp"
# include "../utils.hpp"

class MimeTypes
{
    public:
        MimeTypes(void);
        MimeTypes(const MimeTypes &src);
        ~MimeTypes();

        MimeTypes	&operator=(const MimeTypes &rhs);
        
        std::string		getMimeType(const std::string &filePath);
		std::string		getRevMimeType(const std::string &contType);

    private:

    static std::map<std::string, std::string> createMIMETypes(void);
    static const std::map<std::string, std::string>			_data;

};

#endif
