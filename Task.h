#ifndef TASK_H
#define TASK_H

#include <string>

class Task {
public:
    Task(const std::string& title, const std::string& description);
    void setTitle(const std::string& title);
    void setDescription(const std::string& description);
    std::string getTitle() const;
    std::string getDescription() const;
    bool isCompleted() const;
    void markCompleted(bool completed);
    
private:
    std::string title_;
    std::string description_;
    bool completed_;
};

#endif