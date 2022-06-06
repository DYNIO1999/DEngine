#ifndef _CORE_WINDOW_H_
#define _CORE_WINDOW_H_


#include <memory>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "LogManager.h"


namespace DEngine{

enum class WindowType{
    None,
    Windows,
    Linux
};

struct WindowData
{
    std::string title = "DEngine";
    uint width =1600;
    uint height=900;
};


class Window
{
public:
    static WindowType s_currentWindowType;
protected:

    static std::shared_ptr<Window> Create(const WindowData& winData = WindowData());
    Window()=default;
    virtual ~Window();

private:
};
}
#endif