#ifndef EX5_THREADPOOL_H
#define EX5_THREADPOOL_H

#include "Task.h"
#include <queue>
#include <pthread.h>
using namespace std;

class ThreadPool {
private:
  queue<Task *> tasksQueue;
  pthread_t* threads;
  void executeTasks();
  bool stopped;
  pthread_mutex_t lock;
  static void *execute(void *arg);

public:
  // Constructor for Thread Pool.
  explicit ThreadPool(int threadsNum);

  // Adds task to the list.
  void addTask(Task *task);

  // Kills all tasks and closes threads.
  void terminate();

  // Destructor.
  virtual ~ThreadPool();
};


#endif //EX5_THREADPOOL_H
