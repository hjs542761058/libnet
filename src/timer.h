/*************************************************************************
> File Name: timer.h
> Author: Jayson
> Mail: 542761058@qq.com 
> Created Time: Sun 08 Mar 2020 01:39:42 PM CST
> Description: 
 ************************************************************************/

#pragma once
#include "tnet.h"

namespace tnet
{
	class IOLoop;
	class Timer : public nocopyable
				, public std::enable_shared_from_this<Timer>
	{
	public:
		Timer(const TimerHandler_t& handler, int repeat, int after);
		~Timer();

		void start(IOLoop* loop);
		void stop();

		void reset(int repeat, int after);

		int fd() { return m_fd; }

		IOLoop* loop() { return m_loop; }

		bool isRepeated() { return m_repeated; }

	private:
		void onTimer(IOLoop* loop, int events);

		void initTimer(int repeat, int after);

	private:
		IOLoop* m_loop;
		int m_fd;
		bool m_running;
		bool m_repeated;

		TimerHandler_t m_handler;
	};
}
