/*************************************************************************
> File Name: poller.h
> Author: Jayson
> Mail: 542761058@qq.com 
> Created Time: Mon 27 Apr 2020 03:10:52 PM CST
> Description: 
 ************************************************************************/

#pragma once

#include <vector>
#include "tnet.h"

extern "C"
{
	struct epoll_event;
}

namespace tnet
{
	class IOLoop;
	class IOEvent;

	class Poller
	{
	public:
		Poller(IOLoop* loop);
		~Poller();

		int poll(int timeout, const std::vector<IOEvent*>& events);

		int add(int fd, int events);
		int update(int fd, int events);
		int remove(int fd);
	private:
		IOLoop* m_loop;
		int m_fd;

		struct epoll_event* m_events;
		size_t m_eventSize;
	};
}
