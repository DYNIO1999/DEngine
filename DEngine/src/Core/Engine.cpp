#include "Engine.h"

namespace DEngine{
    Engine::Engine(){

    }
    Engine::~Engine(){

    }
    void Engine::Run(){
        while(m_Running){

            //Add logger!

            float currentTime  = glfwGetTime();
            m_deltaTime = currentTime - m_lastFrameTime;
            m_lastFrameTime = currentTime;


        }
    }
}