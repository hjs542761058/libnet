/*************************************************************************
> File Name: notifier.h
> Author: Jayson
> Mail: 542761058@qq.com 
> Created Time: Tue 28 Apr 2020 05:43:47 PM CST
> Description: 
 ************************************************************************/

#pragma once

#include "tnet.h"

namespace tnet
{
	class Notifier : public nocopyable
				, public std::enable_shared_from_this<Notifier>
	{
		public:
			Notifier(const NotifierHandler_t& handler);
			~Notifier();

			void start(IOLoop* loop);
			void stop();

			void notify();

			IOLoop* loop() {return m_loop;}
		
		private:
			void onEvent(IOLoop* loop, int events);

		private:
			IOLoop* m_loop;
			int m_fd;
			bool m_running;

			NotifierHandler_t m_handler;
	};
}


