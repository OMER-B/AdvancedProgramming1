#include "Task.h"

Task::Task(void *(*func)(void *arg), void *arg) :
    func(func), arg(arg) {}

Task::~Task() {}

void Task::execute() {
  func(arg);
}
