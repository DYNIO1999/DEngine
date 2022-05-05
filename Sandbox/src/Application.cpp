#include "Core/LogManager.h"
int main()
{
    DEngine::LogManager logger;
    logger.init();

    DENGINE_TRACE("Hey");
    DENGINE_TRACE("TEST {}",1);

    return 0;
}
