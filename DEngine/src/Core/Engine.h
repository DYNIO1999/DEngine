#ifndef _CORE_ENGINE_H_
#define _CORE_ENGINE_H_
#include <GLFW/glfw3.h>


/*
 Quick guide to style

 class members with prefix m_variable;
 class method starts with upper case letter like this MyMethod()
 functions as well starts with upper case letter
 parms to functions/methods should be all lowercase

 We're trying to use as modern C++ as we can.
 DYNIO
 */

namespace DEngine{
class Engine
{

public:
    Engine();
    ~Engine();


    static Engine &Get()
    {
        static Engine instance;
        return instance;
    }
    void Run();
    
private:
    float m_lastFrameTime{0.0f};
    float m_deltaTime{0.0f};
    bool m_Running{true};
};
}
#endif
