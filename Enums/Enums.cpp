//
// Created by sanju on 8/8/24.
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
    enum Level {
        LevelError = 0, LevelWarning, LevelInfo
    };

private:
    Level m_LogLevel = LevelInfo;

public:
    void SetLevel(Level level) {
        m_LogLevel = level;
    };

    void Error(const char *message) {
        if (m_LogLevel >= LevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    };

    void Warn(const char *message) {
        if (m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    };

    void Info(const char *message) {
        if (m_LogLevel >= LevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main() {
    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("hello!");
    log.Info("Hello!");
    log.Error("Hello!");


    std::cin.get();
}
