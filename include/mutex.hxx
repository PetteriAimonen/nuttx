#pragma once

#include <pthread.h>
#include <debug.h>

/* Simple wrapper for pthread mutexes */

class Mutex
{
public:
  Mutex() {pthread_mutex_init(&m_mutex, NULL);}
  ~Mutex() {pthread_mutex_destroy(&m_mutex);}
  
  void lock() {pthread_mutex_lock(&m_mutex);}
  void unlock() {pthread_mutex_unlock(&m_mutex);}

private:
  pthread_mutex_t m_mutex;
};

class MutexLock
{
public:
  MutexLock(Mutex mutex) { m_mutex = mutex; m_mutex.lock(); }
  ~MutexLock() { m_mutex.unlock(); }

private:
  Mutex m_mutex;
};

