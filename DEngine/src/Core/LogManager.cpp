#include "LogManager.h"
namespace DEngine{
    std::shared_ptr<spdlog::logger> LogManager::engineLogger;

    LogManager::LogManager()
    {
    }
    LogManager::~LogManager()
    {

    }
    void LogManager::init(){
        auto consoleSink = std::make_shared<spdlog::sinks::ansicolor_stdout_sink_mt>();
        consoleSink->set_pattern("%^[%T] %n: %v%$");
        std::vector<spdlog::sink_ptr> sinks{consoleSink};
        engineLogger = std::make_shared<spdlog::logger>("DEngineLogger", sinks.begin(), sinks.end());
        engineLogger->set_level(spdlog::level::trace);
    }
}
