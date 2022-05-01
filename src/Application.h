#ifndef _APPLICATION_H_
#define _APPLICATION_H_
#include <memory>
#include <Window.h>

class Application
{
public:
    Application();
    ~Application();
    void run();

private:
    static Window window;
    void init();
    void mainLoop();
    void shutdown();
};
#endif