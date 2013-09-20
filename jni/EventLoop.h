/*
 * EventLoop.h
 *
 *  Created on: 19-sep.-2013
 *      Author: Pieter Vantorre
 */

#ifndef _STAR_EVENTLOOP_H_
#define _STAR_EVENTLOOP_H_

#include "defines.h"
#include <android_native_app_glue.h>
#include "Logger.h"

namespace star
{
	class EventLoop
	{
	public:
		EventLoop(android_app* pApplication);

		void run();

	private:
		android_app* mApplicationPtr;
		Logger* mLoggerPtr;
	};
}


#endif /* EVENTLOOP_H_ */
