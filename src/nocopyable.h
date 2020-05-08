/*************************************************************************
> File Name: nocopyable.h
> Author: Jayson
> Mail: 542761058@qq.com 
> Created Time: Fri 06 Mar 2020 03:21:34 PM CST
> Description: 
 ************************************************************************/

#ifndef _NOCOPYABLE_H_
#define _NOCOPYABLE_H_

namespace tnet
{
	class nocopyable
	{
		protected:
			nocopyable() {}
			~nocopyable() {}
		private:
			nocopyable(const nocopyable&);
			nocopyable operator=(const nocopyable&);
	};

}

#endif


