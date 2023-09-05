// Task.cpp
#include "Task.h"

Task::Task(const std::string& title, const std::string& description)
    : title_(title), description_(description), completed_(false) {}

void Task::setTitle(const std::string& title) {
    title_ = title;
}

void Task::setDescription(const std::string& description) {
    description_ = description;
}

std::string Task::getTitle() const {
    return title_;
}

std::string Task::getDescription() const {
    return description_;
}

bool Task::isCompleted() const {
    return completed_;
}

void Task::markCompleted(bool completed) {
    completed_ = completed;
}
