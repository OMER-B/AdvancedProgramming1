#ifndef EX5_TASK_H
#define EX5_TASK_H


class Task {
private:
  void * (*func)(void *arg);
  void *arg;

public:
  // Constructor for task.
  Task(void * (*func)(void *arg), void* arg);

  // Executes the task.
  void execute();

  // Destructor for task.
  virtual ~Task();

};


#endif //EX5_TASK_H
