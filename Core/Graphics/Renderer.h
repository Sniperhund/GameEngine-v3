#pragma once

#include <GLFW/glfw3.h>

namespace GameEngine
{
    class Renderer
    {
    private:
        static GLFWwindow* m_window;
    public:
        static void Init()
        {
            if (!glfwInit())
            {
                
            }
        }
    };
}