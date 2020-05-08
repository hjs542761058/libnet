/*************************************************************************
> File Name: acceptor.h
> Author: Jayson
> Mail: 542761058@qq.com 
> Created Time: Wed 06 May 2020 02:31:54 PM CST
> Description: 
 ************************************************************************/

#pragma once

#include "tnet.h"

namespace tnet
{
	class IOLoop;
	class Address;

	class Acceptor : public nocopyable
	{
		public:
			Acceptor(const NewConnCallback_t& callback);
			~Acceptor();

			int listen(const Address& addr);

			void start(IOLoop* loop);
			void stop();

		private:
			void onAccept(IOLoop*, int);

		private:
			IOLoop* m_loop;

			int m_sockFd;
			int m_dummyFd;

			bool m_running;

			NewConnCallback_t m_callback;
	};
}


