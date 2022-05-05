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

};
#endif