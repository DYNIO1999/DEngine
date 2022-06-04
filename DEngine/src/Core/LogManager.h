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
    static void Init();
    static std::shared_ptr<spdlog::logger> GetLogger(){return engineLogger;}

private:
    static std::shared_ptr<spdlog::logger> engineLogger;
};
#define DENGINE_TRACE(...) DEngine::LogManager::GetLogger()->trace(__VA_ARGS__)
#define DENGINE_INFO(...) DEngine::LogManager::GetLogger()->info(__VA_ARGS__)
#define DENGINE_WARN(...) DEngine::LogManager::GetLogger()->warn(__VA_ARGS__)
#define DENGINE_ERROR(...) DEngine::LogManager::GetLogger()->error(__VA_ARGS__)
};
#endif