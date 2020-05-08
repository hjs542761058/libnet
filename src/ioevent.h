/*************************************************************************
> File Name: ioevent.h
> Author: Jayson
> Mail: 542761058@qq.com 
> Created Time: Sun 26 Apr 2020 04:56:54 PM CST
> Description: 
 ************************************************************************/

#pragma once

#include "tnet.h"

namespace tnet
{
	class IOEvent
	{
		public:
			IOEvent(int fd_, int events_, const IOHandler_t& handler_)
				: fd(fd_)
				, events(events_)
				, handler(handler_){

				 }
			int fd;
			int events;
			IOHandler_t handler;
	};
}


