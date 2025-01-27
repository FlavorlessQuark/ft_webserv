/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 07:55:28 by jjosephi          #+#    #+#             */
/*   Updated: 2020/05/25 07:55:28 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <string>
# include <list>
# include <map>
# include <fstream>
# include <iostream>

class Data
{
private:
//	int port;
	
	std::string key[10] = {
		"port", 
		"server_name", 
		"err_page", 
		"body_size",
		"search_dir", 
		"dir_listing", 
		"default_file",
		"CGI_extension", 
		"uploads",
		"uploads_dir"
		};
	std::string defaults[10] = {
		"port", 
		"server_name", 
		"err_page", 
		"body_size",
		"search_dir", 
		"dir_listing", 
		"default_file",
		"CGI_extension", 
		"uploads",
		"uploads_dir"
		};


public:
	
	std::list<std::string> methods;

	std::map<std::string, std::string>* params;
	
	std::map<int, std::string> error_pages;
	
	Data();
	
	Data(std::string start);

	~Data(){}

	int get_port();
	
	class MissingParamException : public std::exception {virtual const char* what() const throw();};
};

#endif