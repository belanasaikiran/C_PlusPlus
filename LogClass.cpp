//
// Created by sanju on 7/18/24.
//
#include<iostream>

#define LOG(x) std::cout << x << std::endl;

class Log {
    /* Three levels of log:
        1. Error
        2. Warning
        3. Trace

        These levels can be used to easier filterations to get only specific types of logs like to show only errors and warnings when needed.
    */

public:
    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:
    int m_LogLevel = LogLevelInfo;

public:
    void SetLevel(int level) {
        m_LogLevel = level;
    }

    void Error(const char* message) {
        if(m_LogLevel >= LogLevelError)
            std::cout << "[ERROR]: "  << message << std::endl;
    }

    void Warn(const char* message) {
        if(m_LogLevel >= LogLevelWarning)
            std::cout << "[WARNING]: "  << message << std::endl;
    }

    void Info(const char* message) {
        if(m_LogLevel >= LogLevelInfo)
            std::cout << "[INFO]: "  << message << std::endl;
    }

};

int main() {
    Log log;
    log.SetLevel(log.LogLevelError);
    log.Warn("hello!");
    log.Info("Hello!");
    log.Error("Hello!");


    std::cin.get();

}
