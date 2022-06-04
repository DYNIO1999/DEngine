#include "Engine.h"

namespace DEngine{
    Engine::Engine(){

    }
    Engine::~Engine(){

    }

    void Engine::Init() {
        LogManager::Init();
    }
    void Engine::Run(){
        Init();
        DENGINE_ASSERT_NO_INFO(false);
        while(m_Running){
            float currentTime  = glfwGetTime();
            m_deltaTime = currentTime - m_lastFrameTime;
            m_lastFrameTime = currentTime;
           // DENGINE_ASSERT_NO_INFO(false);
        }
        Shutdown();
    }
    void Engine::Shutdown() {

    }
}