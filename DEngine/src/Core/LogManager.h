#ifndef _CORE_LOG_MANAGER_H_
#define _CORE_LOG_MANAGER_H_
#include <memory>
#include <vector>

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace DEngine{

class LogManager
{
public:
    LogManager();
    ~LogManager();
    static void init();
    static std::shared_ptr<spdlog::logger>& getLogger(){return engineLogger;}

private:
    static std::shared_ptr<spdlog::logger> engineLogger;
};
#define DENGINE_TRACE(...) DEngine::LogManager::getLogger()->trace(__VA_ARGS__)
#define DENGINE_INFO(...) DEngine::LogManager::getLogger()->info(__VA_ARGS__)
#define DENGINE_WARN(...) DEngine::LogManager::getLogger()->warn(__VA_ARGS__)
#define DENGINE_ERROR(...) DEngine::LogManager::getLogger()->error(__VA_ARGS__)
#define DENGINE_CRITICAL(...) DEngine::LogManager::getLogger()->critical(__VA_ARGS__)
};
#endif