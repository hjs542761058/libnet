/*************************************************************************
> File Name: address.h
> Author: Jayson
> Mail: 542761058@qq.com 
> Created Time: Thu 23 Apr 2020 12:14:46 PM CST
> Description: 
 ************************************************************************/

#pragma once

#include <string>
#include <stdint.h>
#include <netinet/in.h>

namespace tnet
{
	class Address
	{
	public:
		Address(uint16_t port);
		Address(const std::string& ip, uint16_t port);
		Address(const struct sockaddr_in& addr);

		uint32_t ip() const;

		uint16_t port() const;

		const struct sockaddr_in& sockAddr() const {return m_addr;}

		std::string ipstr() const;
	
	private:
		struct sockaddr_in m_addr;
	};
}
