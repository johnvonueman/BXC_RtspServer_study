﻿#ifndef BXC_RTSPSERVER_USAGEENVIRONMENT_H
#define BXC_RTSPSERVER_USAGEENVIRONMENT_H

#include "ThreadPool.h"
#include "EventScheduler.h"

class UsageEnvironment
{
public:
    static UsageEnvironment* createNew(EventScheduler* scheduler, ThreadPool* threadPool);//工厂模式

    UsageEnvironment(EventScheduler* scheduler, ThreadPool* threadPool);
    ~UsageEnvironment();

    EventScheduler* scheduler();
    ThreadPool* threadPool();

private:
    EventScheduler* mScheduler;
    ThreadPool* mThreadPool;
};

#endif //BXC_RTSPSERVER_USAGEENVIRONMENT_H